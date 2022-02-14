
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct string {int dummy; } ;
struct TYPE_5__ {scalar_t__ length; int * value; } ;
struct TYPE_4__ {TYPE_2__ scalar; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
struct conf {int arg; TYPE_3__ event; } ;
typedef scalar_t__ rstatus_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 struct string* FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,scalar_t__,int *) ;
 scalar_t__ FUNC_3 (struct string*,int *,scalar_t__) ;
 int FUNC_4 (struct string*) ;

__attribute__((used)) static rstatus_t
FUNC_5(struct conf *VAR_4)
{
    rstatus_t VAR_5;
    struct string *VAR_6;
    uint8_t *VAR_7;
    uint32_t VAR_8;

    VAR_7 = VAR_4->event.data.scalar.value;
    VAR_8 = (uint32_t)VAR_4->event.data.scalar.length;
    if (VAR_8 == 0) {
        return VAR_2;
    }

    FUNC_2(VAR_0, "push '%.*s'", VAR_8, VAR_7);

    VAR_6 = FUNC_1(&VAR_4->arg);
    if (VAR_6 == ((void*)0)) {
        return VAR_1;
    }
    FUNC_4(VAR_6);

    VAR_5 = FUNC_3(VAR_6, VAR_7, VAR_8);
    if (VAR_5 != VAR_3) {
        FUNC_0(&VAR_4->arg);
        return VAR_5;
    }

    return VAR_3;
}
