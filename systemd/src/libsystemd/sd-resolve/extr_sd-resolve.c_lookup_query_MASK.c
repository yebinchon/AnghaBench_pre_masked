
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int id; } ;
typedef TYPE_1__ sd_resolve_query ;
struct TYPE_7__ {TYPE_1__** query_array; } ;
typedef TYPE_2__ sd_resolve ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static sd_resolve_query *FUNC_1(sd_resolve *VAR_1, unsigned VAR_2) {
        sd_resolve_query *VAR_3;

        FUNC_0(VAR_1);

        VAR_3 = VAR_1->query_array[VAR_2 % VAR_0];
        if (VAR_3)
                if (VAR_3->id == VAR_2)
                        return VAR_3;

        return ((void*)0);
}
