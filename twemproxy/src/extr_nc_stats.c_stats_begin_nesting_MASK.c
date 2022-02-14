
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct string {int data; int len; } ;
struct stats_buffer {int len; int size; int * data; } ;
struct stats {struct stats_buffer buf; } ;
typedef int rstatus_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,size_t,char*,int ,int ) ;

__attribute__((used)) static rstatus_t
FUNC_1(struct stats *VAR_2, struct string *VAR_3)
{
    struct stats_buffer *VAR_4;
    uint8_t *VAR_5;
    size_t VAR_6;
    int VAR_7;

    VAR_4 = &VAR_2->buf;
    VAR_5 = VAR_4->data + VAR_4->len;
    VAR_6 = VAR_4->size - VAR_4->len - 1;

    VAR_7 = FUNC_0(VAR_5, VAR_6, "\"%.*s\": {", VAR_3->len, VAR_3->data);
    if (VAR_7 < 0 || VAR_7 >= (int)VAR_6) {
        return VAR_0;
    }

    VAR_4->len += (size_t)VAR_7;

    return VAR_1;
}
