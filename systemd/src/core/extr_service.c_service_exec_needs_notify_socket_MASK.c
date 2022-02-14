
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ notify_access; } ;
typedef TYPE_1__ Service ;
typedef int ExecFlags ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_2(Service *VAR_4, ExecFlags VAR_5) {
        FUNC_1(VAR_4);
        if (VAR_5 & VAR_0)

                return FUNC_0(VAR_4->notify_access, VAR_2, VAR_1);



        return VAR_4->notify_access != VAR_3;
}
