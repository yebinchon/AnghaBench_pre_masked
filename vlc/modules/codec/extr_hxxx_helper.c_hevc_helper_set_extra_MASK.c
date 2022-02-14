
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hxxx_helper {int i_nal_length_size; int b_is_xvcC; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hxxx_helper*) ;
 int FUNC_1 (struct hxxx_helper*,void const*,size_t) ;
 int FUNC_2 (void const*) ;
 int FUNC_3 (struct hxxx_helper*,void const*,size_t,int ,int*) ;
 scalar_t__ FUNC_4 (void const*,size_t) ;
 scalar_t__ FUNC_5 (void const*,size_t) ;

__attribute__((used)) static int
FUNC_6(struct hxxx_helper *VAR_2, const void *VAR_3,
                      size_t VAR_4)
{
    if (FUNC_4(VAR_3, VAR_4))
    {
        VAR_2->i_nal_length_size = FUNC_2(VAR_3);
        if (!FUNC_0(VAR_2))
            return VAR_0;
        VAR_2->b_is_xvcC = 1;

        return FUNC_1( VAR_2, VAR_3, VAR_4 );
    }
    else if (FUNC_5(VAR_3, VAR_4))
    {
        VAR_2->i_nal_length_size = 4;
        bool VAR_5;
        return VAR_4 == 0 ? VAR_1 :
               FUNC_3(VAR_2, VAR_3, VAR_4, 0, &VAR_5);
    }
    else
        return VAR_0;
}
