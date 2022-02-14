
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct grid {scalar_t__ hsize; scalar_t__ sy; } ;


 int FUNC_0 (char*,char const*,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct grid *VAR_0, const char* VAR_1, u_int VAR_2)
{
 if (VAR_2 >= VAR_0->hsize + VAR_0->sy) {
  FUNC_0("%s: y out of range: %u", VAR_1, VAR_2);
  return (-1);
 }
 return (0);
}
