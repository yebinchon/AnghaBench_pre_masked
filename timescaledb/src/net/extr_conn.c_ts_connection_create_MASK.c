
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* ops; } ;
struct TYPE_6__ {scalar_t__ (* init ) (TYPE_2__*) ;} ;
typedef size_t ConnectionType ;
typedef TYPE_2__ Connection ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int * VAR_4 ;
 int ** VAR_5 ;
 TYPE_2__* FUNC_1 (size_t,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;

Connection *
FUNC_8(ConnectionType VAR_6)
{
 Connection *VAR_7;

 if (VAR_6 == VAR_3)
  FUNC_2(VAR_2, "invalid connection type");

 if (((void*)0) == VAR_5[VAR_6])
  FUNC_3(VAR_2,
    (FUNC_4(VAR_0),
     FUNC_6("%s connections are not supported", VAR_4[VAR_6]),
     FUNC_5("Enable %s support when compiling the extension.", VAR_4[VAR_6])));

 VAR_7 = FUNC_1(VAR_6, VAR_5[VAR_6]);

 FUNC_0(((void*)0) != VAR_7);

 if (((void*)0) != VAR_7->ops->init)
  if (VAR_7->ops->init(VAR_7) < 0)
   FUNC_3(VAR_2,
     (FUNC_4(VAR_1),
      FUNC_6("%s connection could not be initialized", VAR_4[VAR_6])));

 return VAR_7;
}
