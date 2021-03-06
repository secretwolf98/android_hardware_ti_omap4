/*
 * Copyright (C) Texas Instruments - http://www.ti.com/
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __UTILS__
#define __UTILS__

#define MIN(a, b) ( { typeof(a) __a = (a), __b = (b); __a < __b ? __a : __b; } )
#define MAX(a, b) ( { typeof(a) __a = (a), __b = (b); __a > __b ? __a : __b; } )
#define SWAP(a, b) do { typeof(a) __a = (a); (a) = (b); (b) = __a; } while (0)

#define DIV_ROUND_UP(a, b) (((a) + (b) - 1) / (b))

#define WIDTH(rect) ((rect).right - (rect).left)
#define HEIGHT(rect) ((rect).bottom - (rect).top)

#define RECT_INTERSECTS(a, b) (((a).bottom > (b).top) && ((a).top < (b).bottom) && ((a).right > (b).left) && ((a).left < (b).right))

typedef float transform_matrix[2][3];

extern const transform_matrix unit_matrix;

void translate_matrix(transform_matrix m, float dx, float dy);
void scale_matrix(transform_matrix m, int x_from, int x_to, int y_from, int y_to);
void rotate_matrix(transform_matrix m, int quarter_turns);
int round_float(float x);

#endif
