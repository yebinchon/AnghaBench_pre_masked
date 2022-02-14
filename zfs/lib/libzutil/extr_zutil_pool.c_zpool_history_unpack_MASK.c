
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;
typedef int uint64_t ;
typedef scalar_t__ uchar_t ;
typedef int reclen ;
typedef int nvlist_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int **,int ) ;
 void* FUNC_3 (int **,int) ;

int
FUNC_4(char *VAR_1, uint64_t VAR_2, uint64_t *VAR_3,
    nvlist_t ***VAR_4, uint_t *VAR_5)
{
 uint64_t VAR_6;
 nvlist_t *VAR_7;
 int VAR_8;
 void *VAR_9;

 while (VAR_2 > sizeof (VAR_6)) {


  for (VAR_8 = 0, VAR_6 = 0; VAR_8 < sizeof (VAR_6); VAR_8++)
   VAR_6 += (uint64_t)(((uchar_t *)VAR_1)[VAR_8]) << (8*VAR_8);

  if (VAR_2 < sizeof (VAR_6) + VAR_6)
   break;


  if (FUNC_2(VAR_1 + sizeof (VAR_6), VAR_6, &VAR_7, 0) != 0)
   return (VAR_0);
  VAR_2 -= sizeof (VAR_6) + VAR_6;
  VAR_1 += sizeof (VAR_6) + VAR_6;


  (*VAR_5)++;
  if (FUNC_0(*VAR_5 + 1)) {
   VAR_9 = FUNC_3(*VAR_4,
       *VAR_5 * 2 * sizeof (nvlist_t *));
   if (VAR_9 == ((void*)0)) {
    FUNC_1(VAR_7);
    (*VAR_5)--;
    return (VAR_0);
   }
   *VAR_4 = VAR_9;
  }
  (*VAR_4)[*VAR_5 - 1] = VAR_7;
 }

 *VAR_3 = VAR_2;
 return (0);
}
