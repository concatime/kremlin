#include "StructErase_instru.h"

void StructErase_f(DECL_BY_VAL(StructErase_u, r), int32_t n)
{
  if (n < (int32_t )1)
  {
    
  }
  else
  {
    INIT_LOCAL(StructErase_u, r_, left, LOCAL_FIELD(r,right) - (int32_t )1, right, LOCAL_FIELD(r,left) + (int32_t )1 );
    StructErase_f(PASS_LOCAL(StructErase_u, r_), n - (int32_t )1);
  }
}

void StructErase_test()
{
  INIT_LOCAL(StructErase_u, r, left, (int32_t )18, right, (int32_t )42);
  int32_t z2 = (int32_t )4;
  int32_t z4 = z2 * z2;
  int32_t z8 = z4 * z4;
  int32_t z16 = z8 * z8;
  int32_t z24 = z8 * z16;
  int32_t z = z24 * z2;
  StructErase_f(PASS_LOCAL(StructErase_u, r), z);
  return;
}

