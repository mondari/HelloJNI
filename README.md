# 使用IDEA进行JNI 编程

参考文章：[IntelliJ IDEA平台下JNI编程（一）—HelloWorld篇](http://blog.csdn.net/huachao1001/article/details/53906237)

其中用到的 IDEA External Tool 配置情况如下：

1. Generate Header File 配置：
name：`Generate Header File` 
Program：`$JDKPath$/bin/javah`
Parameters：`-jni -classpath $OutputPath$ -d ./jni $FileClass$`
Working Directory：`$ProjectFileDir$`

2. Generate DLL 配置：
name：`Generate DLL` 
Program：`<GCC路径>`
Parameters：`-Wl,--add-stdcall-alias -I"<JDK路径>\include" -I"<JDK路径>\include\win32" -shared -o $FileNameWithoutExtension$.dll ./jni/$FileNameWithoutExtension$.c`
Working Directory：`$ProjectFileDir$`

