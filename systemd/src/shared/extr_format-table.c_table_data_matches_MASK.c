
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ TableDataType ;
struct TYPE_4__ {scalar_t__ type; size_t minimum_width; size_t maximum_width; unsigned int weight; unsigned int align_percent; unsigned int ellipsize_percent; void const* data; scalar_t__ uppercase; scalar_t__ url; scalar_t__ color; } ;
typedef TYPE_1__ TableData ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (void const*,void const*,size_t) ;
 size_t FUNC_2 (scalar_t__,void const*) ;

__attribute__((used)) static bool FUNC_3(
                TableData *VAR_0,
                TableDataType VAR_1,
                const void *VAR_2,
                size_t VAR_3,
                size_t VAR_4,
                unsigned VAR_5,
                unsigned VAR_6,
                unsigned VAR_7) {

        size_t VAR_8, VAR_9;
        FUNC_0(VAR_0);

        if (VAR_0->type != VAR_1)
                return 0;

        if (VAR_0->minimum_width != VAR_3)
                return 0;

        if (VAR_0->maximum_width != VAR_4)
                return 0;

        if (VAR_0->weight != VAR_5)
                return 0;

        if (VAR_0->align_percent != VAR_6)
                return 0;

        if (VAR_0->ellipsize_percent != VAR_7)
                return 0;


        if (VAR_0->color)
                return 0;
        if (VAR_0->url)
                return 0;
        if (VAR_0->uppercase)
                return 0;

        VAR_8 = FUNC_2(VAR_1, VAR_2);
        VAR_9 = FUNC_2(VAR_0->type, VAR_0->data);

        if (VAR_8 != VAR_9)
                return 0;

        return FUNC_1(VAR_2, VAR_0->data, VAR_9) == 0;
}
