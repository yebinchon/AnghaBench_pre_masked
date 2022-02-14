
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct buffer_t {int length; int start; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer_t*) ;
 int FUNC_1 (int,int ,int*) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3 (int VAR_2, struct buffer_t *VAR_3, uint32_t VAR_4)
{
    enum v4l2_buf_type VAR_5 = VAR_0;


    FUNC_1 (VAR_2, VAR_1, &VAR_5);
    for (uint32_t VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
        FUNC_2 (VAR_3[VAR_6].start, VAR_3[VAR_6].length);
    FUNC_0 (VAR_3);
}
