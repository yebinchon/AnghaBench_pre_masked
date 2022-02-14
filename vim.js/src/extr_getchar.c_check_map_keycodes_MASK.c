
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int* m_keys; int* m_str; struct TYPE_6__* m_next; } ;
typedef TYPE_1__ mapblock_T ;
typedef int char_u ;
struct TYPE_7__ {TYPE_1__** b_maphash; TYPE_1__* b_first_abbr; struct TYPE_7__* b_next; } ;
typedef TYPE_2__ buf_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int ) ;
 TYPE_1__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_1__** VAR_5 ;
 int* VAR_6 ;
 int FUNC_1 () ;

void
FUNC_2()
{
    mapblock_T *VAR_7;
    char_u *VAR_8;
    int VAR_9;
    char_u VAR_10[3];
    char_u *VAR_11;
    int VAR_12;
    int VAR_13;




    FUNC_1();
    VAR_11 = VAR_6;
    VAR_6 = (char_u *)"mappings";
 for (VAR_12 = 0; VAR_12 <= 1; ++VAR_12)
     for (VAR_13 = 0; VAR_13 < 256; ++VAR_13)
     {
  if (VAR_12)
  {
      if (VAR_13)
   break;





   VAR_7 = VAR_3;
  }
  else
  {





   VAR_7 = VAR_5[VAR_13];
  }
  for ( ; VAR_7 != ((void*)0); VAR_7 = VAR_7->m_next)
  {
      for (VAR_9 = 0; VAR_9 <= 1; ++VAR_9)
      {
   if (VAR_9 == 0)
       VAR_8 = VAR_7->m_keys;
   else
       VAR_8 = VAR_7->m_str;
   while (*VAR_8)
   {
       if (*VAR_8 == VAR_1)
       {
    ++VAR_8;
    if (*VAR_8 < 128)
    {
        VAR_10[0] = VAR_8[0];
        VAR_10[1] = VAR_8[1];
        VAR_10[2] = VAR_2;
        (void)FUNC_0(VAR_10, VAR_0);
    }
    ++VAR_8;
       }
       ++VAR_8;
   }
      }
  }
     }





    VAR_6 = VAR_11;
}
