
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int start_time; int io; int * pipe; int vid; } ;


 int FUNC_0 (struct view*) ;
 int FUNC_1 (int ,char const*,int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct view *VAR_0, const char *VAR_1)
{
 FUNC_0(VAR_0);

 FUNC_1(VAR_0->vid, VAR_1, FUNC_2(VAR_1));
 VAR_0->pipe = &VAR_0->io;
 VAR_0->start_time = FUNC_3(((void*)0));
}
