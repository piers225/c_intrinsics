#include <stdio.h>
#include <arm_neon.h>  

void add_arrays_neon(float *a, float *b, float *result, size_t n) {
    size_t i;
    for (i = 0; i <= n - 4; i += 4) {
        float32x4_t vec_a = vld1q_f32(&a[i]);
        float32x4_t vec_b = vld1q_f32(&b[i]);

        float32x4_t vec_result = vaddq_f32(vec_a, vec_b);

        vst1q_f32(&result[i], vec_result);
    }

    for (; i < n; i++) {
        result[i] = a[i] + b[i];
    }
}

void subtract_arrays_neon(float *a, float *b, float *result, size_t n) {
    size_t i;
    for (i = 0; i <= n - 4; i += 4) {
        float32x4_t vec_a = vld1q_f32(&a[i]);
        float32x4_t vec_b = vld1q_f32(&b[i]);

        float32x4_t vec_result = vsubq_f32(vec_a, vec_b);

        vst1q_f32(&result[i], vec_result);
    }

    for (; i < n; i++) {
        result[i] = a[i] - b[i];
    }
}

void multiply_arrays_neon(float *a, float *b, float *result, size_t n) {
    size_t i;
    for (i = 0; i <= n - 4; i += 4) {
        float32x4_t vec_a = vld1q_f32(&a[i]);
        float32x4_t vec_b = vld1q_f32(&b[i]);

        float32x4_t vec_result = vmulq_f32(vec_a, vec_b);

        vst1q_f32(&result[i], vec_result);
    }

    for (; i < n; i++) {
        result[i] = a[i] * b[i];
    }
}

void divide_arrays_neon(float *a, float *b, float *result, size_t n) {
    size_t i;
    for (i = 0; i <= n - 4; i += 4) {
        float32x4_t vec_a = vld1q_f32(&a[i]);
        float32x4_t vec_b = vld1q_f32(&b[i]);

        float32x4_t vec_result = vdivq_f32(vec_a, vec_b);

        vst1q_f32(&result[i], vec_result);
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

    // Add arrays
    add_arrays_neon(a, b, result, n);
    printf("Addition Result: ");
    for (size_t i = 0; i < n; i++) {
        printf("%f ", result[i]);
    }
    printf("\n");

    // Subtract arrays
    subtract_arrays_neon(a, b, result, n);
    printf("Subtraction Result: ");
    for (size_t i = 0; i < n; i++) {
        printf("%f ", result[i]);
    }
    printf("\n");

    // Multiply arrays
    multiply_arrays_neon(a, b, result, n);
    printf("Multiplication Result: ");
    for (size_t i = 0; i < n; i++) {
        printf("%f ", result[i]);
    }
    printf("\n");

    // Divide arrays
    divide_arrays_neon(a, b, result, n);
    printf("Division Result: ");
    for (size_t i = 0; i < n; i++) {
        printf("%f ", result[i]);
    }
    printf("\n");

    return 0;
}
