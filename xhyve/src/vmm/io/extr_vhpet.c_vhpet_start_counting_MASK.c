
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhpet {int countbase_sbt; int countbase; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct vhpet*,int,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct vhpet *VAR_1)
{
 int VAR_2;

 VAR_1->countbase_sbt = FUNC_0();
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {




  FUNC_1(VAR_1, VAR_2, VAR_1->countbase,
      VAR_1->countbase_sbt);
 }
}
