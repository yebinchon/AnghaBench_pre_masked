
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hxxx_helper {int i_codec; void* pf_process_block; int b_need_xvcC; int b_is_xvcC; } ;




 int VAR_0 ;
 int FUNC_0 (struct hxxx_helper*,void const*,size_t) ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_1 (struct hxxx_helper*,void const*,size_t) ;
 int FUNC_2 () ;

int
FUNC_3(struct hxxx_helper *VAR_8, const void *VAR_9,
                      size_t VAR_10)
{
    int VAR_11;
    switch (VAR_8->i_codec)
    {
        case 129:
            VAR_11 = FUNC_0(VAR_8, VAR_9, VAR_10);
            break;
        case 128:
            VAR_11 = FUNC_1(VAR_8, VAR_9, VAR_10);
            break;
        default:
            FUNC_2();
    }
    if (VAR_11 != VAR_0)
        return VAR_11;

    switch (VAR_8->i_codec)
    {
        case 129:
            if (VAR_8->b_is_xvcC)
            {
                if (VAR_8->b_need_xvcC)
                    VAR_8->pf_process_block = VAR_3;
                else
                    VAR_8->pf_process_block = VAR_7;
            }
            else
            {
                if (VAR_8->b_need_xvcC)
                    VAR_8->pf_process_block = VAR_2;
                else
                    VAR_8->pf_process_block = VAR_1;
            }
            break;
        case 128:
            if (VAR_8->b_is_xvcC)
            {
                if (VAR_8->b_need_xvcC)
                    VAR_8->pf_process_block = VAR_6;
                else
                    VAR_8->pf_process_block = VAR_7;
            }
            else
            {
                if (VAR_8->b_need_xvcC)
                    VAR_8->pf_process_block = VAR_5;
                else
                    VAR_8->pf_process_block = VAR_4;
            }
            break;
        default:
            FUNC_2();
    }
    return VAR_0;;
}
