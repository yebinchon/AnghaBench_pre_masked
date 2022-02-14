
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_visitor_data {int (* visitor ) (int ,struct ref const*) ;int data; } ;
struct ref {int valid; } ;


 int FUNC_0 (int ,struct ref const*) ;

__attribute__((used)) static bool
FUNC_1(void *VAR_0, void *VAR_1)
{
 struct ref_visitor_data *VAR_2 = VAR_0;
 const struct ref *VAR_3 = VAR_1;

 if (!VAR_3->valid)
  return 1;
 return VAR_2->visitor(VAR_2->data, VAR_3);
}
