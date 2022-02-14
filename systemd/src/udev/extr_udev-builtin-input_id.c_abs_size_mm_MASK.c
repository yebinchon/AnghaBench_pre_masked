
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_absinfo {int maximum; int minimum; int resolution; } ;



__attribute__((used)) static int FUNC_0(const struct input_absinfo *VAR_0) {

        return (VAR_0->maximum - VAR_0->minimum) / VAR_0->resolution;
}
