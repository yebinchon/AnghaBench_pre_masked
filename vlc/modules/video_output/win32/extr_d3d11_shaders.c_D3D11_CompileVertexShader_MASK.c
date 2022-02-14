
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_8__ {int layout; int shader; } ;
typedef TYPE_1__ d3d_vshader_t ;
typedef int d3d11_handle_t ;
struct TYPE_9__ {int d3ddevice; } ;
typedef TYPE_2__ d3d11_device_t ;
struct TYPE_10__ {char* member_0; int member_6; int const member_5; int const member_4; int member_3; int member_2; int member_1; } ;
typedef int ID3DBlob ;
typedef int HRESULT ;
typedef TYPE_3__ D3D11_INPUT_ELEMENT_DESC ;



 int * FUNC_0 (int *,int *,TYPE_2__*,char const*,int) ;



 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,TYPE_3__*,int,void*,int ,int *) ;
 int FUNC_6 (int ,void*,int ,int *,int *) ;
 int VAR_1 ;
 int FUNC_7 (int *,char*,int ) ;

__attribute__((used)) static HRESULT FUNC_8(vlc_object_t *VAR_2, d3d11_handle_t *VAR_3,
                                         d3d11_device_t *VAR_4, const char *VAR_5,
                                         d3d_vshader_t *VAR_6)
{
   HRESULT VAR_7 = VAR_0;
   ID3DBlob *VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, 0);
   if (!VAR_8)
       goto error;

   VAR_7 = FUNC_6(VAR_4->d3ddevice, (void *)FUNC_2(VAR_8),
                                        FUNC_3(VAR_8), ((void*)0), &VAR_6->shader);

   if(FUNC_1(VAR_7)) {
       FUNC_7(VAR_2, "Failed to create the flat vertex shader. (hr=0x%lX)", VAR_7);
       goto error;
   }

   static D3D11_INPUT_ELEMENT_DESC VAR_9[] = {
   { "POSITION", 0, 129, 0, 131, 130, 0},
   { "TEXCOORD", 0, 128, 0, 131, 130, 0},
   };

   VAR_7 = FUNC_5(VAR_4->d3ddevice, VAR_9, 2, (void *)FUNC_2(VAR_8),
                                       FUNC_3(VAR_8), &VAR_6->layout);

   FUNC_4(VAR_8);
   VAR_8 = ((void*)0);
   if(FUNC_1(VAR_7)) {
       FUNC_7(VAR_2, "Failed to create the vertex input layout. (hr=0x%lX)", VAR_7);
       goto error;
   }

   return VAR_1;
error:
   return VAR_7;
}
