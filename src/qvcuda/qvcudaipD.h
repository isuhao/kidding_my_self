/*
 *	Copyright (C) 2007, 2008, 2009, 2010, 2011, 2012. PARP Research Group.
 *	<http://perception.inf.um.es>
 *	University of Murcia, Spain.
 *
 *	This file is part of the QVision library.
 *
 *	QVision is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU Lesser General Public License as
 *	published by the Free Software Foundation, version 3 of the License.
 *
 *	QVision is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU Lesser General Public License for more details.
 *
 *	You should have received a copy of the GNU Lesser General Public
 *	License along with QVision. If not, see <http://www.gnu.org/licenses/>.
 */

/// @file
/// @brief File from the QVision library.
/// @author PARP Research Group. University of Murcia, Spain.

#ifndef QVCUDAIPD_H
#define QVCUDAIPD_H

// Larger sizes do not fit in shared memory:
#define CUDA_MAX_MASK_SIZE	100

void Subtract_kernel(float *src1, float *src2, float *dst, int w, int h, int step);

void ScaleDown_kernel(const float *src, float *dest, float* h_Kernel, int w, int h, int step_s, int step_d);

void SeparableFilter_kernel(const float *src, float *dest, float *temp, float *h_Kernel, int radius, int w, int h, int step);

void Test_kernel(const float *src, float *dest, int radius, int iters, int w, int h, int step);

#endif
