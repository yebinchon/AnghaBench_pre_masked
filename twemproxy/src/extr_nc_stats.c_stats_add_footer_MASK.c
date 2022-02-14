
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct stats_buffer {scalar_t__ len; scalar_t__ size; char* data; } ;
struct stats {struct stats_buffer buf; } ;
typedef int rstatus_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static rstatus_t
FUNC_0(struct stats *VAR_2)
{
    struct stats_buffer *VAR_3;
    uint8_t *VAR_4;

    VAR_3 = &VAR_2->buf;

    if (VAR_3->len == VAR_3->size) {
        return VAR_0;
    }


    VAR_4 = VAR_3->data + VAR_3->len - 1;
    VAR_4[0] = '}';
    VAR_4[1] = '\n';
    VAR_3->len += 1;

    return VAR_1;
}
