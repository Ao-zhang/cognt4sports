# -*- coding: utf-8 -*-
#定义hello函数，这个函数的功能是输出“hello world!”
def hello():
    import tkinter
    top = tkinter.Tk(className='python window app')
    top.title('hello from python')
    w = tkinter.Label(top, text="我来自python代码!")
    w.pack()
    
    width = 380
    height = 300
    
    #获取屏幕尺寸以计算布局参数，使窗口居屏幕中央
    screenwidth = top.winfo_screenwidth() 
    screenheight = top.winfo_screenheight()
    alignstr = '%dx%d+%d+%d' % (width, height, (screenwidth-width)/2, (screenheight-height)/2)
    top.geometry(alignstr)
    
    #设置窗口是否可变长、宽，True：可变，False：不可变
    top.resizable(width=False, height=True)
    # 进入消息循环
    top.mainloop()