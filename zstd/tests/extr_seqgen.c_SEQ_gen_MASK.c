
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SEQ_stream ;
typedef int SEQ_outBuffer ;
typedef int SEQ_gen_type ;


 size_t FUNC_0 (int *,unsigned int,int *) ;

 size_t FUNC_1 (int *,unsigned int,int *) ;



 size_t FUNC_2 (int *,unsigned int,int *) ;

size_t FUNC_3(SEQ_stream* VAR_0, SEQ_gen_type VAR_1, unsigned VAR_2, SEQ_outBuffer* VAR_3)
{
    switch (VAR_1) {
        case 129: return FUNC_1(VAR_0, VAR_2, VAR_3);
        case 131: return FUNC_0(VAR_0, VAR_2, VAR_3);
        case 128: return FUNC_2(VAR_0, VAR_2, VAR_3);
        case 130:
        default: return 0;
    }
}
