
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int col; scalar_t__ lnum; } ;
typedef TYPE_1__ pos_T ;
typedef int colnr_T ;
typedef char char_u ;
struct TYPE_7__ {TYPE_1__ w_cursor; } ;


 int VAR_0 ;
 char VAR_1 ;
 TYPE_5__* VAR_2 ;
 TYPE_1__* FUNC_0 (int *,char) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (char**,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,TYPE_1__*) ;
 char* FUNC_7 () ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (char) ;
 int * FUNC_9 (int ,int ) ;

int
FUNC_10()
{
    pos_T *VAR_4, VAR_5, VAR_6;
    int VAR_7;
    char_u *VAR_8;
    colnr_T VAR_9;
    colnr_T VAR_10;
    int VAR_11, VAR_12;
    int VAR_13;


    VAR_13 = (FUNC_9(VAR_3, VAR_0) != ((void*)0));

    VAR_5 = VAR_2->w_cursor;
    VAR_2->w_cursor.col = 0;

    if ((VAR_4 = FUNC_0(((void*)0), '(')) == ((void*)0))
 VAR_4 = FUNC_0(((void*)0), '[');
    else
    {
 VAR_6 = *VAR_4;
 VAR_4 = FUNC_0(((void*)0), '[');
 if (VAR_4 == ((void*)0) || FUNC_6(VAR_4, &VAR_6))
     VAR_4 = &VAR_6;
    }
    if (VAR_4 != ((void*)0))
    {


 VAR_7 = -1;
 VAR_11 = 0;

 while (--VAR_2->w_cursor.lnum >= VAR_4->lnum)
 {
     if (FUNC_4(VAR_2->w_cursor.lnum))
  continue;
     for (VAR_8 = FUNC_7(); *VAR_8 != VAR_1; ++VAR_8)
     {
  if (*VAR_8 == ';')
  {
      while (*(VAR_8 + 1) != VAR_1)
   ++VAR_8;
      continue;
  }
  if (*VAR_8 == '\\')
  {
      if (*(VAR_8 + 1) != VAR_1)
   ++VAR_8;
      continue;
  }
  if (*VAR_8 == '"' && *(VAR_8 + 1) != VAR_1)
  {
      while (*++VAR_8 && *VAR_8 != '"')
      {

   if (*VAR_8 == '\\')
   {
       if (*++VAR_8 == VAR_1)
    break;
       if (VAR_8[1] == VAR_1)
       {
    ++VAR_8;
    break;
       }
   }
      }
  }
  if (*VAR_8 == '(' || *VAR_8 == '[')
      ++VAR_11;
  else if (*VAR_8 == ')' || *VAR_8 == ']')
      --VAR_11;
     }
     if (VAR_11 == 0)
     {
  VAR_7 = FUNC_1();
  break;
     }
 }

 if (VAR_7 == -1)
 {
     VAR_2->w_cursor.lnum = VAR_4->lnum;
     VAR_2->w_cursor.col = VAR_4->col;
     VAR_9 = VAR_4->col;

     VAR_8 = FUNC_7();

     if (VAR_13 && FUNC_1() == 0)
  VAR_7 = 2;
     else
     {
  VAR_7 = 0;
  while (*VAR_8 && VAR_9)
  {
      VAR_7 += FUNC_3(&VAR_8, (colnr_T)VAR_7);
      VAR_9--;
  }
  if (!VAR_13 && (*VAR_8 == '(' || *VAR_8 == '[')
            && FUNC_5(VAR_8 + 1))
      VAR_7 += 2;
  else
  {
      VAR_8++;
      VAR_7++;
      VAR_10 = VAR_7;

      while (FUNC_8(*VAR_8))
      {
   VAR_7 += FUNC_2(VAR_8, (colnr_T)VAR_7);
   ++VAR_8;
      }

      if (*VAR_8 && *VAR_8 != ';')
      {


   if (!VAR_13 && *VAR_8 != '(' && *VAR_8 != '[')
       VAR_10++;

   VAR_11 = 0;
   VAR_12 = 0;

   if (VAR_13
    || (*VAR_8 != '"'
        && *VAR_8 != '\''
        && *VAR_8 != '#'
        && (*VAR_8 < '0' || *VAR_8 > '9')))
   {
       while (*VAR_8
        && (!FUNC_8(*VAR_8)
     || VAR_12
     || VAR_11)
        && (!((*VAR_8 == '(' || *VAR_8 == '[')
         && !VAR_12
         && !VAR_11
         && VAR_13)))
       {
    if (*VAR_8 == '"')
        VAR_12 = !VAR_12;
    if ((*VAR_8 == '(' || *VAR_8 == '[')
              && !VAR_12)
        ++VAR_11;
    if ((*VAR_8 == ')' || *VAR_8 == ']')
              && !VAR_12)
        --VAR_11;
    if (*VAR_8 == '\\' && *(VAR_8+1) != VAR_1)
        VAR_7 += FUNC_3(&VAR_8,
            (colnr_T)VAR_7);
    VAR_7 += FUNC_3(&VAR_8,
            (colnr_T)VAR_7);
       }
   }
   while (FUNC_8(*VAR_8))
   {
       VAR_7 += FUNC_2(VAR_8, (colnr_T)VAR_7);
       VAR_8++;
   }
   if (!*VAR_8 || *VAR_8 == ';')
       VAR_7 = VAR_10;
      }
  }
     }
 }
    }
    else
 VAR_7 = 0;

    VAR_2->w_cursor = VAR_5;

    return VAR_7;
}
