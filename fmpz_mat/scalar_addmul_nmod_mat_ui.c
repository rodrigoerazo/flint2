/*=============================================================================

    This file is part of FLINT.

    FLINT is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    FLINT is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with FLINT; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA

=============================================================================*/
/******************************************************************************

    Copyright (C) 2011 Fredrik Johansson

******************************************************************************/

#include "fmpz_mat.h"

void
fmpz_mat_scalar_addmul_nmod_mat_ui(fmpz_mat_t B,
                        const nmod_mat_t A, ulong c)
{
    fmpz_t t;
    fmpz_init(t);
    fmpz_set_ui(t, c);
    fmpz_mat_scalar_addmul_nmod_mat_fmpz(B, A, t);
    fmpz_clear(t);
}
