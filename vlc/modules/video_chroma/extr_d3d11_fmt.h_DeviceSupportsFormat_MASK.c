
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int ID3D11Device ;
typedef int DXGI_FORMAT ;


 int FUNC_0 (int *,int ,int*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline bool FUNC_2(ID3D11Device *VAR_0,
                                        DXGI_FORMAT VAR_1, UINT VAR_2)
{
    UINT VAR_3;
    return FUNC_1( FUNC_0(VAR_0, VAR_1,
                                                      &VAR_3) )
            && ( VAR_3 & VAR_2 ) == VAR_2;
}
