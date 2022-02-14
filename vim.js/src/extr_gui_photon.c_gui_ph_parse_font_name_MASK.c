
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int_u ;
typedef scalar_t__ char_u ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__*) ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__**) ;
 int FUNC_2 (int ) ;
 scalar_t__* FUNC_3 (scalar_t__*,char) ;
 scalar_t__* FUNC_4 (scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_5(
 char_u *VAR_6,
 char_u **VAR_7,
 int_u *VAR_8,
 int_u *VAR_9)
{
    char_u *VAR_10;
    int_u VAR_11, VAR_12;

    VAR_10 = FUNC_3(VAR_6, ':');
    if (VAR_10 == ((void*)0))
 VAR_11 = FUNC_0(VAR_6);
    else
 VAR_11 = (int_u) (VAR_10 - VAR_6);

    *VAR_7 = FUNC_4(VAR_6, VAR_11);
    if (*VAR_7 != ((void*)0))
    {
 if (VAR_10 != ((void*)0))
 {
     while (*VAR_10 != VAR_1 && *VAR_10++ == ':')
     {
  switch (FUNC_2(*VAR_10++))
  {
      case 'a': *VAR_8 |= VAR_2; break;
      case 'b': *VAR_8 |= VAR_3; break;
      case 'i': *VAR_8 |= VAR_4; break;

      case 's':
   VAR_12 = FUNC_1(&VAR_10);

   if (VAR_12 < 1 || VAR_12 > 100)
       VAR_12 = 8;

   *VAR_9 = VAR_12;
   break;

      default:
   break;
  }
     }
 }
 return VAR_5;
    }
    return VAR_0;
}
