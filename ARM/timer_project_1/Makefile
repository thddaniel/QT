#############################################################################
# Makefile for building: timer_project
# Generated by qmake (2.01a) (Qt 4.5.0) on: ?? 4? 5 08:26:54 2014
# Project:  timer_project.pro
# Template: app
# Command: /opt/EmbedSky/qt-4.5/__install/arm/bin/qmake -unix -o Makefile timer_project.pro
#############################################################################

####### Compiler, tools and options

CC            = arm-linux-gcc
CXX           = arm-linux-g++
DEFINES       = -DQT_NO_DEBUG -DQT_SQL_LIB -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/default -I. -I/opt/EmbedSky/qt-4.5/__install/arm/include/QtCore -I/opt/EmbedSky/qt-4.5/__install/arm/include/QtNetwork -I/opt/EmbedSky/qt-4.5/__install/arm/include/QtGui -I/opt/EmbedSky/qt-4.5/__install/arm/include/QtSql -I/opt/EmbedSky/qt-4.5/__install/arm/include -I. -I. -I.
LINK          = arm-linux-g++
LFLAGS        = -Wl,-O1 -Wl,-rpath,/opt/EmbedSky/qt-4.5/__install/arm/lib
LIBS          = $(SUBLIBS)  -L/opt/EmbedSky/qt-4.5/__install/arm//lib -lQtSql -L/tslib-1.4/lib -L/opt/EmbedSky/qt-4.5/__install/arm//lib -lQtGui -lts -lQtNetwork -lQtCore -lm -lrt -ldl -lpthread
AR            = arm-linux-ar cqs
RANLIB        = 
QMAKE         = /opt/EmbedSky/qt-4.5/__install/arm/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -sf
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = alarm.cpp \
		input.cpp \
		main.cpp \
		mainwindow.cpp \
		message.cpp \
		musicwidget.cpp \
		posix_qextserialport.cpp \
		qextserialbase.cpp \
		telwidget.cpp \
		uart.cpp moc_alarm.cpp \
		moc_input.cpp \
		moc_mainwindow.cpp \
		moc_message.cpp \
		moc_musicwidget.cpp \
		moc_qextserialbase.cpp \
		moc_telwidget.cpp \
		moc_uart.cpp \
		qrc_image.cpp
OBJECTS       = alarm.o \
		input.o \
		main.o \
		mainwindow.o \
		message.o \
		musicwidget.o \
		posix_qextserialport.o \
		qextserialbase.o \
		telwidget.o \
		uart.o \
		moc_alarm.o \
		moc_input.o \
		moc_mainwindow.o \
		moc_message.o \
		moc_musicwidget.o \
		moc_qextserialbase.o \
		moc_telwidget.o \
		moc_uart.o \
		qrc_image.o
DIST          = /opt/EmbedSky/qt-4.5/__install/arm/mkspecs/common/g++.conf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/common/unix.conf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/common/linux.conf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/common/qws.conf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/qconfig.pri \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/qt_functions.prf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/qt_config.prf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/exclusive_builds.prf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/default_pre.prf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/release.prf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/default_post.prf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/warn_on.prf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/qt.prf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/unix/thread.prf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/moc.prf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/resources.prf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/uic.prf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/yacc.prf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/lex.prf \
		timer_project.pro
QMAKE_TARGET  = timer_project
DESTDIR       = 
TARGET        = timer_project

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: timer_project.pro  /opt/EmbedSky/qt-4.5/__install/arm/mkspecs/default/qmake.conf /opt/EmbedSky/qt-4.5/__install/arm/mkspecs/common/g++.conf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/common/unix.conf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/common/linux.conf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/common/qws.conf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/qconfig.pri \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/qt_functions.prf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/qt_config.prf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/exclusive_builds.prf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/default_pre.prf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/release.prf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/default_post.prf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/warn_on.prf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/qt.prf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/unix/thread.prf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/moc.prf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/resources.prf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/uic.prf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/yacc.prf \
		/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/lex.prf \
		/opt/EmbedSky/qt-4.5/__install/arm/lib/libQtSql.prl \
		/opt/EmbedSky/qt-4.5/__install/arm/lib/libQtCore.prl \
		/opt/EmbedSky/qt-4.5/__install/arm/lib/libQtGui.prl \
		/opt/EmbedSky/qt-4.5/__install/arm/lib/libQtNetwork.prl
	$(QMAKE) -unix -o Makefile timer_project.pro
/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/common/g++.conf:
/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/common/unix.conf:
/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/common/linux.conf:
/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/common/qws.conf:
/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/qconfig.pri:
/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/qt_functions.prf:
/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/qt_config.prf:
/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/exclusive_builds.prf:
/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/default_pre.prf:
/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/release.prf:
/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/default_post.prf:
/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/warn_on.prf:
/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/qt.prf:
/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/unix/thread.prf:
/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/moc.prf:
/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/resources.prf:
/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/uic.prf:
/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/yacc.prf:
/opt/EmbedSky/qt-4.5/__install/arm/mkspecs/features/lex.prf:
/opt/EmbedSky/qt-4.5/__install/arm/lib/libQtSql.prl:
/opt/EmbedSky/qt-4.5/__install/arm/lib/libQtCore.prl:
/opt/EmbedSky/qt-4.5/__install/arm/lib/libQtGui.prl:
/opt/EmbedSky/qt-4.5/__install/arm/lib/libQtNetwork.prl:
qmake:  FORCE
	@$(QMAKE) -unix -o Makefile timer_project.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/timer_project1.0.0 || $(MKDIR) .tmp/timer_project1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/timer_project1.0.0/ && $(COPY_FILE) --parents alarm.h input.h mainwindow.h message.h musicwidget.h posix_qextserialport.h qextserialbase.h telwidget.h uart.h .tmp/timer_project1.0.0/ && $(COPY_FILE) --parents image.qrc .tmp/timer_project1.0.0/ && $(COPY_FILE) --parents alarm.cpp input.cpp main.cpp mainwindow.cpp message.cpp musicwidget.cpp posix_qextserialport.cpp qextserialbase.cpp telwidget.cpp uart.cpp .tmp/timer_project1.0.0/ && (cd `dirname .tmp/timer_project1.0.0` && $(TAR) timer_project1.0.0.tar timer_project1.0.0 && $(COMPRESS) timer_project1.0.0.tar) && $(MOVE) `dirname .tmp/timer_project1.0.0`/timer_project1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/timer_project1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_alarm.cpp moc_input.cpp moc_mainwindow.cpp moc_message.cpp moc_musicwidget.cpp moc_qextserialbase.cpp moc_telwidget.cpp moc_uart.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_alarm.cpp moc_input.cpp moc_mainwindow.cpp moc_message.cpp moc_musicwidget.cpp moc_qextserialbase.cpp moc_telwidget.cpp moc_uart.cpp
moc_alarm.cpp: alarm.h
	/opt/EmbedSky/qt-4.5/__install/arm//bin/moc $(DEFINES) $(INCPATH) alarm.h -o moc_alarm.cpp

moc_input.cpp: input.h
	/opt/EmbedSky/qt-4.5/__install/arm//bin/moc $(DEFINES) $(INCPATH) input.h -o moc_input.cpp

moc_mainwindow.cpp: alarm.h \
		telwidget.h \
		posix_qextserialport.h \
		qextserialbase.h \
		musicwidget.h \
		message.h \
		input.h \
		uart.h \
		mainwindow.h
	/opt/EmbedSky/qt-4.5/__install/arm//bin/moc $(DEFINES) $(INCPATH) mainwindow.h -o moc_mainwindow.cpp

moc_message.cpp: input.h \
		posix_qextserialport.h \
		qextserialbase.h \
		message.h
	/opt/EmbedSky/qt-4.5/__install/arm//bin/moc $(DEFINES) $(INCPATH) message.h -o moc_message.cpp

moc_musicwidget.cpp: musicwidget.h
	/opt/EmbedSky/qt-4.5/__install/arm//bin/moc $(DEFINES) $(INCPATH) musicwidget.h -o moc_musicwidget.cpp

moc_qextserialbase.cpp: qextserialbase.h
	/opt/EmbedSky/qt-4.5/__install/arm//bin/moc $(DEFINES) $(INCPATH) qextserialbase.h -o moc_qextserialbase.cpp

moc_telwidget.cpp: posix_qextserialport.h \
		qextserialbase.h \
		telwidget.h
	/opt/EmbedSky/qt-4.5/__install/arm//bin/moc $(DEFINES) $(INCPATH) telwidget.h -o moc_telwidget.cpp

moc_uart.cpp: posix_qextserialport.h \
		qextserialbase.h \
		uart.h
	/opt/EmbedSky/qt-4.5/__install/arm//bin/moc $(DEFINES) $(INCPATH) uart.h -o moc_uart.cpp

compiler_rcc_make_all: qrc_image.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_image.cpp
qrc_image.cpp: image.qrc \
		image/dianfanbao.jpg \
		image/Stop.png \
		image/Mute.png \
		image/Prev.png \
		image/door.jpg \
		image/background.jpg \
		image/phone.jpg \
		image/call.jpg \
		image/close.jpg \
		image/player_skin_white.png \
		image/zoomin.png \
		image/jiaoshuion.jpg \
		image/stop.jpg \
		image/fish.png \
		image/shiwaioff.jpg \
		image/damenoff.jpg \
		image/bell.jpg \
		image/cha.jpg \
		image/name6.jpg \
		image/backgrond2.jpg \
		image/damenon.jpg \
		image/shezhi.jpg \
		image/Prev_2.png \
		image/00.jpg \
		image/0.jpg \
		image/1.jpg \
		image/2.jpg \
		image/douhao.jpg \
		image/3.jpg \
		image/4.jpg \
		image/5.jpg \
		image/6.jpg \
		image/7.jpg \
		image/background11.jpg \
		image/led1off.jpg \
		image/8.jpg \
		image/9.jpg \
		image/Next.png \
		image/11.jpg \
		image/A.jpg \
		image/B.jpg \
		image/C.jpg \
		image/D.jpg \
		image/Mute_2.png \
		image/E.jpg \
		image/F.jpg \
		image/G.jpg \
		image/clearphoto.jpg \
		image/H.jpg \
		image/I.jpg \
		image/J.jpg \
		image/K.jpg \
		image/baofanoff.jpg \
		image/L.jpg \
		image/M.jpg \
		image/N.jpg \
		image/22.jpg \
		image/O.jpg \
		image/tanhao.jpg \
		image/P.jpg \
		image/Q.jpg \
		image/R.jpg \
		image/S.jpg \
		image/SYS.png \
		image/T.jpg \
		image/dianbiao.jpg \
		image/U.jpg \
		image/V.jpg \
		image/W.jpg \
		image/X.jpg \
		image/ping.jpg \
		image/Y.jpg \
		image/Z.jpg \
		image/photo.jpg \
		image/dengguang.jpg \
		image/zhinengjiaju.jpg \
		image/33.jpg \
		image/qichuangon.jpg \
		image/wenhao.jpg \
		image/icon.jpg \
		image/main_background.jpg \
		image/44.jpg \
		image/splash.jpg \
		image/55.jpg \
		image/dianfanbao_2.jpg \
		image/fenhao.jpg \
		image/curtain1on.jpg \
		image/dianhua.jpg \
		image/increase.jpg \
		image/back.jpg \
		image/callmaster.jpg \
		image/down.png \
		image/Update_2.png \
		image/Update.xcf \
		image/66.jpg \
		image/up.png \
		image/meiqi.jpg \
		image/sleepon.jpg \
		image/Stop_2.png \
		image/del1.jpg \
		image/chart.jpg \
		image/del2.jpg \
		image/Play_2.png \
		image/Music.png \
		image/send2.jpg \
		image/jiaoshuioff.jpg \
		image/shuibiao.jpg \
		image/Buttonsize.bmp \
		image/listen.jpg \
		image/77.jpg \
		image/Attraction.png \
		image/zaijiaon.jpg \
		image/decrease.jpg \
		image/juhao.jpg \
		image/opendoor.jpg \
		image/curtain1off.jpg \
		image/88.jpg \
		image/Play.png \
		image/Update.png \
		image/name66.jpg \
		image/shiwaion.jpg \
		image/player_skin.png \
		image/ff.jpg \
		image/99.jpg \
		image/sleepoff.jpg \
		image/zaijiaoff.jpg \
		image/back1.jpg \
		image/del.png \
		image/tvoff.jpg \
		image/shuji.jpg \
		image/led1on.jpg \
		image/baofanon.jpg \
		image/zoomout.png \
		image/led.jpg \
		image/duanxin.jpg \
		image/input.png \
		image/caiji.jpg \
		image/go.jpg \
		image/background2.jpg \
		image/background3.jpg \
		image/background4.jpg \
		image/Close.png \
		image/qichuangoff.jpg \
		image/jiadian.jpg \
		image/background1.jpg \
		image/doorbutton.jpg \
		image/tvon.jpg \
		image/yinyue.jpg \
		image/Next_2.png
	/opt/EmbedSky/qt-4.5/__install/arm/bin/rcc -name image image.qrc -o qrc_image.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean 

####### Compile

alarm.o: alarm.cpp alarm.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o alarm.o alarm.cpp

input.o: input.cpp input.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o input.o input.cpp

main.o: main.cpp mainwindow.h \
		alarm.h \
		telwidget.h \
		posix_qextserialport.h \
		qextserialbase.h \
		musicwidget.h \
		message.h \
		input.h \
		uart.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

mainwindow.o: mainwindow.cpp mainwindow.h \
		alarm.h \
		telwidget.h \
		posix_qextserialport.h \
		qextserialbase.h \
		musicwidget.h \
		message.h \
		input.h \
		uart.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o mainwindow.cpp

message.o: message.cpp message.h \
		input.h \
		posix_qextserialport.h \
		qextserialbase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o message.o message.cpp

musicwidget.o: musicwidget.cpp musicwidget.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o musicwidget.o musicwidget.cpp

posix_qextserialport.o: posix_qextserialport.cpp posix_qextserialport.h \
		qextserialbase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o posix_qextserialport.o posix_qextserialport.cpp

qextserialbase.o: qextserialbase.cpp qextserialbase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qextserialbase.o qextserialbase.cpp

telwidget.o: telwidget.cpp telwidget.h \
		posix_qextserialport.h \
		qextserialbase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o telwidget.o telwidget.cpp

uart.o: uart.cpp uart.h \
		posix_qextserialport.h \
		qextserialbase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o uart.o uart.cpp

moc_alarm.o: moc_alarm.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_alarm.o moc_alarm.cpp

moc_input.o: moc_input.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_input.o moc_input.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_message.o: moc_message.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_message.o moc_message.cpp

moc_musicwidget.o: moc_musicwidget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_musicwidget.o moc_musicwidget.cpp

moc_qextserialbase.o: moc_qextserialbase.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_qextserialbase.o moc_qextserialbase.cpp

moc_telwidget.o: moc_telwidget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_telwidget.o moc_telwidget.cpp

moc_uart.o: moc_uart.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_uart.o moc_uart.cpp

qrc_image.o: qrc_image.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_image.o qrc_image.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

