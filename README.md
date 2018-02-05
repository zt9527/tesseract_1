# tesseract_1
c++ opencv tesseract 

简单的纯文本图片文字提取
将小图放大可以增加正确率
//对图片进行相应形态学编辑

需要安装编译opencv tesseract编程环境
使用的是中文字库 chi_sim

也可以直接使用 tesseract-orc 软件进行文字提取
  tesseract test.png test -l chi_sim
  会生成test.txt文件
