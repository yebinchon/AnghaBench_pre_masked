
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ clazz; } ;
struct TYPE_10__ {scalar_t__ clazz; } ;
struct TYPE_14__ {TYPE_2__ System; TYPE_1__ Environment; } ;
struct TYPE_13__ {int (* DeleteGlobalRef ) (TYPE_4__**,scalar_t__) ;} ;
struct TYPE_12__ {scalar_t__ (* GetEnv ) (TYPE_3__**,void**,int ) ;} ;
typedef TYPE_3__* JavaVM ;
typedef TYPE_4__* JNIEnv ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_8__ VAR_3 ;
 int FUNC_0 (int ) ;
 int * VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_3__**,void**,int ) ;
 int FUNC_2 (TYPE_4__**,scalar_t__) ;
 int FUNC_3 (TYPE_4__**,scalar_t__) ;

void
FUNC_4(JavaVM* VAR_5, void* VAR_6)
{
    (void) VAR_6;

    for (size_t VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7)
        FUNC_0(VAR_4[VAR_7]);

    JNIEnv* VAR_8 = ((void*)0);
    if ((*VAR_5)->GetEnv(VAR_5, (void**) &VAR_8, VAR_2) != VAR_1)
        return;

    if (VAR_3.Environment.clazz)
        (*VAR_8)->DeleteGlobalRef(VAR_8, VAR_3.Environment.clazz);

    if (VAR_3.System.clazz)
        (*VAR_8)->DeleteGlobalRef(VAR_8, VAR_3.System.clazz);
}
