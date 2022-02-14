
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int argv; int dir; int io; } ;
typedef enum open_flags { ____Placeholder_open_flags } open_flags ;
typedef enum io_flags { ____Placeholder_io_flags } io_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 struct view** VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int *,int ,int ,char* const*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (char*,char*,int) ;
 scalar_t__ FUNC_6 (int ,int,int) ;

bool
FUNC_7(struct view *VAR_9, enum open_flags VAR_10)
{
 char VAR_11[64] = "";
 char VAR_12[64] = "";
 char * const VAR_13[] = { VAR_11, VAR_12, ((void*)0) };

 enum io_flags VAR_14 = (VAR_10 & VAR_3) ? VAR_1 : 0;
 enum io_flags VAR_15 = (VAR_10 & VAR_5) ? VAR_2 : 0;
 enum io_flags VAR_16 = VAR_14 | VAR_15;

 int VAR_17 = FUNC_2();
 bool VAR_18 = (VAR_17 == 1 && !!(VAR_10 & VAR_4)) || VAR_17 == 2;
 int VAR_19, VAR_20;

 FUNC_3(VAR_8, VAR_19, VAR_20);
 if (VAR_18 && FUNC_6(VAR_7, VAR_19, VAR_20)) {
  bool VAR_21 = VAR_6[0] == VAR_9;
  int VAR_22 = FUNC_1(VAR_20);

  if (VAR_21)
   VAR_20 -= VAR_22;
  else
   VAR_20 = VAR_22 - 1;
 }

 FUNC_5(VAR_12, "COLUMNS=%d", FUNC_0(0, VAR_20));
 FUNC_5(VAR_11, "LINES=%d", VAR_19);

 return FUNC_4(&VAR_9->io, VAR_0, VAR_9->dir, VAR_13, VAR_9->argv, VAR_16);
}
