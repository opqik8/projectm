/**
 * projectM -- Milkdrop-esque visualisation SDK
 * Copyright (C)2003-2004 projectM Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 * See 'LICENSE.txt' included within this release
 *
 */
/* Evaluation Code */

#include <stdio.h>
#include <stdlib.h>

#include "projectM.h"
#include "common.h"
#include "fatal.h"

#include "Eval.h"
#include "Expr.h"
#include "Param.h"
#include "Func.h"
#include "BuiltinFuncs.hpp"
#include "wipemalloc.h"

InfixOp *Eval::infix_add = NULL;
InfixOp *Eval::infix_minus = NULL;
InfixOp *Eval::infix_div = NULL;
InfixOp *Eval::infix_mult = NULL;
InfixOp *Eval::infix_or = NULL;
InfixOp *Eval::infix_and = NULL;
InfixOp *Eval::infix_mod = NULL;
InfixOp *Eval::infix_negative = NULL;
InfixOp *Eval::infix_positive = NULL;

/* Initializes all infix operators */
int Eval::init_infix_ops() {

	Eval::infix_add = new InfixOp(INFIX_ADD, 4);
	Eval::infix_minus = new InfixOp(INFIX_MINUS, 3);
	Eval::infix_div = new InfixOp(INFIX_DIV, 2);
	Eval::infix_or = new InfixOp(INFIX_OR, 5);
	Eval::infix_and = new InfixOp(INFIX_AND,4);
	Eval::infix_mod = new InfixOp(INFIX_MOD, 1);
	Eval::infix_mult = new InfixOp(INFIX_MULT, 2);
	
	/* Prefix operators */
	Eval::infix_positive = new InfixOp(INFIX_ADD, 0);
	Eval::infix_negative = new InfixOp(INFIX_MINUS, 0);

	return PROJECTM_SUCCESS;
}

/* Destroys the infix operator list. This should
   be done on program exit */
int Eval::destroy_infix_ops()
{

  free(Eval::infix_add);
  free(Eval::infix_minus);
  free(Eval::infix_div);
  free(Eval::infix_or);
  free(Eval::infix_and);
  free(Eval::infix_mod);
  free(Eval::infix_mult);
  free(Eval::infix_positive);
  free(Eval::infix_negative);

  Eval::infix_add = NULL;
  Eval::infix_minus = NULL;
  Eval::infix_div = NULL;
  Eval::infix_or = NULL;
  Eval::infix_and = NULL;
  Eval::infix_mod = NULL;
  Eval::infix_mult = NULL;
  Eval::infix_positive = NULL;
  Eval::infix_negative = NULL;

  return PROJECTM_SUCCESS;
}
