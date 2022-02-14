
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utf8_data {scalar_t__ size; int data; } ;


 int FUNC_0 (char*,int ,size_t) ;
 char* FUNC_1 (char*,size_t,int) ;

char *
FUNC_2(struct utf8_data *VAR_0)
{
 char *VAR_1;
 size_t VAR_2;

 VAR_1 = ((void*)0);

 VAR_2 = 0;
 for(; VAR_0->size != 0; VAR_0++) {
  VAR_1 = FUNC_1(VAR_1, VAR_2 + VAR_0->size, 1);
  FUNC_0(VAR_1 + VAR_2, VAR_0->data, VAR_0->size);
  VAR_2 += VAR_0->size;
 }

 VAR_1 = FUNC_1(VAR_1, VAR_2 + 1, 1);
 VAR_1[VAR_2] = '\0';
 return (VAR_1);
}
