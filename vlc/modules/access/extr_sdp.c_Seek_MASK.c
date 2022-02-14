
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {char* p_sys; scalar_t__ psz_location; } ;
typedef TYPE_1__ stream_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2 (stream_t *VAR_2, uint64_t VAR_3)
{




    VAR_2->p_sys = (char *)VAR_2->psz_location
                    + FUNC_0(VAR_2->psz_location, VAR_3);
    return VAR_1;
}
