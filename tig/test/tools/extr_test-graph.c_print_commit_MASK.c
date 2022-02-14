
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct graph {int (* foreach_symbol ) (struct graph*,int *,int ,int *) ;} ;
struct commit {int canvas; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (struct graph*,int *,int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct graph *VAR_1, struct commit *VAR_2, const char *VAR_3)
{
 VAR_1->foreach_symbol(VAR_1, &VAR_2->canvas, VAR_0, ((void*)0));
 FUNC_0(" %s\n", VAR_3);
}
