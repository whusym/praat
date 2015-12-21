#ifndef _LogisticRegression_h_
#define _LogisticRegression_h_
/* LogisticRegression.h
 *
 * Copyright (C) 2005-2011,2015 Paul Boersma
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include "Regression.h"

#include "LogisticRegression_def.h"
oo_CLASS_CREATE (LogisticRegression);

autoLogisticRegression LogisticRegression_create (const char32 *dependent1, const char32 *dependent2);

autoLogisticRegression Table_to_LogisticRegression (Table me, const char32 *columnsWithFactors_string,
	const char32 *columnWithDependent1_string, const char32 *columnWithDependent2_string);

void LogisticRegression_drawBoundary (LogisticRegression me, Graphics graphics, long colx, double xmin, double xmax,
	long coly, double ymin, double ymax, bool garnish);

/* End of file LogisticRegression.h */
#endif
