
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct box {char* text; } ;


 char* FUNC_0 (struct box*,size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;

void
FUNC_2(struct box *VAR_0, size_t VAR_1, const char *VAR_2, size_t VAR_3)
{
 char *VAR_4 = FUNC_0(VAR_0, VAR_1);

 VAR_0->text = VAR_4;
 FUNC_1(VAR_4, VAR_2, VAR_3);
}
