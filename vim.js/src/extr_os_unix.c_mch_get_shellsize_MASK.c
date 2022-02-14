
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {long ws_col; long ws_row; long ts_cols; long ts_lines; } ;
struct ttysize {long ws_col; long ws_row; long ts_cols; long ts_lines; } ;
typedef int char_u ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int*) ;
 long FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (long*,long*) ;
 scalar_t__ FUNC_4 (int,int ,struct winsize*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 () ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_7 (int ,int ) ;

int
FUNC_8()
{
    long VAR_9 = 0;
    long VAR_10 = 0;
    char_u *VAR_11;
    if (VAR_10 == 0 || VAR_9 == 0 || FUNC_7(VAR_7, VAR_0) != ((void*)0))
    {
 if ((VAR_11 = (char_u *)FUNC_2("LINES")))
     VAR_9 = FUNC_1((char *)VAR_11);
 if ((VAR_11 = (char_u *)FUNC_2("COLUMNS")))
     VAR_10 = FUNC_1((char *)VAR_11);
    }
    if (VAR_10 <= 0 || VAR_9 <= 0)
 return VAR_2;

    VAR_4 = VAR_9;
    VAR_1 = VAR_10;
    FUNC_6();
    return VAR_3;
}
