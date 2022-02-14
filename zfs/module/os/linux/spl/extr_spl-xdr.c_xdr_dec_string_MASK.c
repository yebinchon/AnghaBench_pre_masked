
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint_t ;
typedef scalar_t__ bool_t ;
typedef int XDR ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (int const,int ) ;
 int FUNC_2 (char*,int const) ;
 int * FUNC_3 (char*,int ,int const) ;
 int FUNC_4 (int *,char*,int const) ;
 int FUNC_5 (int *,int const*) ;

__attribute__((used)) static bool_t
FUNC_6(XDR *VAR_4, char **VAR_5, const uint_t VAR_6)
{
 uint_t VAR_7;
 bool_t VAR_8 = VAR_0;

 if (!FUNC_5(VAR_4, &VAR_7))
  return (VAR_0);

 if (VAR_7 > VAR_6 || VAR_7 > VAR_3 - 1)
  return (VAR_0);





 if (*VAR_5 == ((void*)0)) {
  FUNC_0(sizeof (uint_t) > sizeof (size_t));

  *VAR_5 = FUNC_1(VAR_7 + 1, VAR_1);
  if (*VAR_5 == ((void*)0))
   return (VAR_0);

  VAR_8 = VAR_2;
 }

 if (!FUNC_4(VAR_4, *VAR_5, VAR_7))
  goto fail;

 if (FUNC_3(*VAR_5, 0, VAR_7) != ((void*)0))
  goto fail;

 (*VAR_5)[VAR_7] = '\0';

 return (VAR_2);

fail:
 if (VAR_8)
  FUNC_2(*VAR_5, VAR_7 + 1);

 return (VAR_0);
}
