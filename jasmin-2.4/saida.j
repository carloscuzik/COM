.class public Main
.super java/lang/Object

.method public <init>()V
  aload_0
  invokenonvirtual java/lang/Object/<init>()V
  return
.end method

.method public static main([Ljava/lang/String;)V
  .limit stack 4
  .limit locals 10

  getstatic java/lang/System/out Ljava/io/PrintStream;
  ldc "Qual o seu nome?"
  invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
  ldc "carlos"
  astore_1
  getstatic java/lang/System/out Ljava/io/PrintStream;
  ldc "Ola "
  invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
  getstatic java/lang/System/out Ljava/io/PrintStream;
  aload_1
  invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
  return
.end method
