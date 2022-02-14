
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct paste_buffer {size_t size; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int) ;
 size_t FUNC_1 (char*,int ,size_t,int const) ;
 char* FUNC_2 (int *,size_t,int) ;

char *
FUNC_3(struct paste_buffer *VAR_3)
{
 char *VAR_4;
 size_t VAR_5, VAR_6;
 const int VAR_7 = VAR_1|VAR_2|VAR_0;
 const size_t VAR_8 = 200;

 VAR_5 = VAR_3->size;
 if (VAR_5 > VAR_8)
  VAR_5 = VAR_8;
 VAR_4 = FUNC_2(((void*)0), VAR_5, 4 + 4);

 VAR_6 = FUNC_1(VAR_4, VAR_3->data, VAR_5, VAR_7);
 if (VAR_3->size > VAR_8 || VAR_6 > VAR_8)
  FUNC_0(VAR_4 + VAR_8, "...", 4);
 return (VAR_4);
}
