
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;


 scalar_t__ FUNC_0 (int *,int **) ;
 scalar_t__ FUNC_1 (int *,char const**) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static sd_device *FUNC_3(sd_device *VAR_0) {
        sd_device *VAR_1;




        for (VAR_1 = VAR_0; VAR_1; ) {
                const char *VAR_2;

                if (FUNC_1(VAR_1, &VAR_2) < 0)
                        break;

                if (!FUNC_2(VAR_2, "virtio"))
                        break;

                if (FUNC_0(VAR_1, &VAR_1) < 0)
                        return ((void*)0);
        }

        return VAR_1;
}
