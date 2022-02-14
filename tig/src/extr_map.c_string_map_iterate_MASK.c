
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_map_iterator {int (* fn ) (int ,void*) ;int data; } ;


 int FUNC_0 (int ,void*) ;

__attribute__((used)) static int
FUNC_1(void **VAR_0, void *VAR_1)
{
 struct string_map_iterator *VAR_2 = VAR_1;

 return VAR_2->fn(VAR_2->data, *VAR_0);
}
