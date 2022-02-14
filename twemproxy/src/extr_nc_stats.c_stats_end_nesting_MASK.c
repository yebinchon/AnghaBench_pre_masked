
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct stats_buffer {int* data; int len; int size; } ;
struct stats {struct stats_buffer buf; } ;
typedef int rstatus_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;

__attribute__((used)) static rstatus_t
FUNC_2(struct stats *VAR_2)
{
    struct stats_buffer *VAR_3;
    uint8_t *VAR_4;

    VAR_3 = &VAR_2->buf;
    VAR_4 = VAR_3->data + VAR_3->len;

    VAR_4 -= 2;

    switch (VAR_4[0]) {
    case ',':

        FUNC_0(VAR_4[1] == ' ');
        VAR_4[0] = '}';
        VAR_4[1] = ',';
        break;

    case '}':
        if (VAR_3->len == VAR_3->size) {
            return VAR_0;
        }

        FUNC_0(VAR_4[1] == ',');
        VAR_4[1] = '}';
        VAR_4[2] = ',';
        VAR_3->len += 1;
        break;

    default:
        FUNC_1();
    }

    return VAR_1;
}
