#include <stdio.h>
#include <immintrin.h>  

void add_arrays_sse(float *a, float *b, float *result, size_t n) {
    size_t i;
    for (i = 0; i <= n - 4; i += 4) {
        __m128 vec_a = _mm_loadu_ps(&a[i]);
        __m128 vec_b = _mm_loadu_ps(&b[i]);

        __m128 vec_result = _mm_add_ps(vec_a, vec_b);

        _mm_storeu_ps(&result[i], vec_result);
    }
    
    for (; i < n; i++) {
        result[i] = a[i] + b[i];
    }
}

void subtract_arrays_sse(float *a, float *b, float *result, size_t n) {
    size_t i;
    for (i = 0; i <= n - 4; i += 4) {
        __m128 vec_a = _mm_loadu_ps(&a[i]);
        __m128 vec_b = _mm_loadu_ps(&b[i]);

        __m128 vec_result = _mm_sub_ps(vec_a, vec_b);

        _mm_storeu_ps(&result[i], vec_result);
    }
    
    for (; i < n; i++) {
        result[i] = a[i] - b[i];
    }
}

void multiply_arrays_sse(float *a, float *b, float *result, size_t n) {
    size_t i;
    for (i = 0; i <= n - 4; i += 4) {
        __m128 vec_a = _mm_loadu_ps(&a[i]);
        __m128 vec_b = _mm_loadu_ps(&b[i]);

        __m128 vec_result = _mm_mul_ps(vec_a, vec_b);

        _mm_storeu_ps(&result[i], vec_result);
    }
    
    for (; i < n; i++) {
        result[i] = a[i] * b[i];
    }
}

void divide_arrays_sse(float *a, float *b, float *result, size_t n) {
    size_t i;
    for (i = 0; i <= n - 4; i += 4) {
        __m128 vec_a = _mm_loadu_ps(&a[i]);
        __m128 vec_b = _mm_loadu_ps(&b[i]);

        __m128 vec_result = _mm_div_ps(vec_a, vec_b);

        _mm_storeu_ps(&result[i], vec_result);
    }
    
    for (; i < n; i++) {
        result[i] = a[i] / b[i];
    }
}

int main() {
    size_t n = 8;
    float a[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f};
    float b[] = {8.0f, 7.0f, 6.0f, 5.0f, 4.0f, 3.0f, 2.0f, 1.0f};
    float result[n];

    add_arrays_sse(a, b, result, n);
    printf("Addition Result: ");
    for (size_t i = 0; i < n; i++) {
        printf("%f ", result[i]);
    }
    printf("\n");

    subtract_arrays_sse(a, b, result, n);
    printf("Subtraction Result: ");
    for (size_t i = 0; i < n; i++) {
        printf("%f ", result[i]);
    }
    printf("\n");

    multiply_arrays_sse(a, b, result, n);
    printf("Multiplication Result: ");
    for (size_t i = 0; i < n; i++) {
        printf("%f ", result[i]);
    }
    printf("\n");
    
    divide_arrays_sse(a, b, result, n);
    printf("Division Result: ");
    for (size_t i = 0; i < n; i++) {
        printf("%f ", result[i]);
    }
    printf("\n");

    return 0;
}
