#include <assert.h>
#include <math.h>

int main()
{
  __CPROVER_islessequalf();
  assert(0);
  return 0;
}
