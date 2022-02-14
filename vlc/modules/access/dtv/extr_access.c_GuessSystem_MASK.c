
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dvb_device_t ;
typedef scalar_t__ dtv_delivery_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static dtv_delivery_t FUNC_4 (const char *VAR_5, dvb_device_t *VAR_6)
{

    dtv_delivery_t VAR_7 = FUNC_0(VAR_5);
    if(VAR_7 != VAR_4)
        return VAR_7;





    unsigned VAR_8 = FUNC_2 (VAR_6);

    VAR_8 &= ~VAR_1;

    if( VAR_8 )
    {

        if (!FUNC_3 (VAR_5, "cable"))
        {
            return FUNC_1(VAR_8 & VAR_0);
        }
        else if (!FUNC_3 (VAR_5, "satellite"))
        {
            return FUNC_1(VAR_8 & VAR_2);
        }
        else if (!FUNC_3 (VAR_5, "terrestrial"))
        {
            return FUNC_1(VAR_8 & VAR_3);
        }
        else
        {

            return FUNC_1(VAR_8);
        }
    }

    return VAR_4;
}
