
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inout_port {char* name; int port; int size; int flags; int handler; } ;
typedef int iop ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct inout_port*,int) ;
 int VAR_2 ;
 int FUNC_2 (struct inout_port*) ;

__attribute__((used)) static void
FUNC_3(int VAR_3, int VAR_4)
{
 struct inout_port VAR_5;

 FUNC_0(VAR_3, VAR_4);

 FUNC_1(&VAR_5, sizeof(VAR_5));
 VAR_5.name = "default";
 VAR_5.port = VAR_3;
 VAR_5.size = VAR_4;
 VAR_5.flags = (int) (VAR_1 | VAR_0);
 VAR_5.handler = VAR_2;

 FUNC_2(&VAR_5);
}
