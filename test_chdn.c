1->White box test and Black box test
https://bbs.csdn.net/topics/80128379
https://blog.csdn.net/ylli_800/article/details/4904728
https://blog.csdn.net/qq_37292005/article/details/88833727
https://blog.csdn.net/TBOKCN/article/details/82957447 ->chinese english terminology

BlackBoxTest->tester provides input and observe the result of output but don't care about how  the program is implemented

Static Test->doesn't run the test such as the testing product manual then inspect and review

Static white box testing->process of reviewing software design, architecture, and codes without executing to find the software defects. A.K.A structural analysis

Dynamic test->testying by running/using software
--------------------------------------------------------------------
->软件测试技术经典教程 第1章 软件测试基本概念
https://blog.csdn.net/qq_37292005/article/details/88823063
	-Defect->requriment and design
	-Error->development
	-Failutre->post production
	-Bug->testing
	-Test case->test execution. Before testing, design a detail test plan including testing enviiroment, test process and expected result
	-
	-
	-
->软件测试技术经典教程》第2章 软件测试分类
https://blog.csdn.net/qq_37292005/article/details/88825664
----------------------depending on stages-----------------------------------------------------
-Unit test
	-In the software code->find the samllest unit (like function) to test
	-Procedure
	-A->Compile the code and execute it->see if it can run
	-B->Static test(check the code to see if any syntax error or following coding procedure)
	-C->Dnyanmic test(Check the correctness of code, boundary test, 容错性 (fault tolerance)
		-fault tolerance->https://blog.csdn.net/liaomin416100569/article/details/5046800
		-At the same time,design a test steps,test input data as test case
	-
	-
-Integration testing
	-Focusing on integration of units or modules to form a system/sub-system.The focus is on the interconnection of protocols between each module 
	-The purpose of this is to see if everything works after combining each module
	-
	-
-System test
	-See software as one piece for integrating test including functionality, performance, and system enviroment (software running on hardware) for testing
	-Tester:For black box test
	-Ensure if the functionality of system satisfied the performance requirement. In addition, ensure the compatiblity of software on different system enviroment (Linux app on VxWorks/LynxOS/QNX) 
	-
	-

-Acceptace test
        -It occurs at the end of system test. Tester/maintainer do the the test. It is the last version before releasing to the client/customer
	-alpha test:User,Tester, Developer test togeter (in house)
	-beta tester:Let the end user to do the test
	-
	-
	-
-------------------------------------end of depending on stage-------------------------------
------------------------------------start of depending on execution-------------------------
-Static testing
	-No executing the program
	-Code Test:Ensure the main code follow the coding convention
	-UI test:Test software's GUI meet the requirement or not
	-File test:Ensure test manual for customer meet the end user requirement 
	-
-Dyanic testing
	-During the execution of program, provide the test input
	-See the the theoretical result vs test result
	-
-Whilte box test->
	-look at the driver/kernel codes and try to find the errors
	-
---------------------------------end of depending on execution------------------------
--------------------------------start of black box test-------------------------------
-Functionality test
	-Logic function test
	-UI test
	-Usablity test
	-Installation Test
	-Installation test
        -Compatility test
-Performance Test
	-Regular performance test->Let the test system run under the normal payload in hardware/software enviroment. THere will be no additional stress test
	-Relaiblity test->let the program run and to see how reliabit it is
	-Load test->Let it run within the maximum load and to see how reliable it is
	-Stress test->Let it run above the maximum payload until it crashes. To see what will be the maximum payload cause the sysem to crash 
	-
-Regression test->after the software version has been updated. Do the same test as the previous one
-Smoke test->Before testing the new version of software being tested, we need to ensusre the basic fuctionality works in new version. THerefore it becomes testabile  
-Ramdom test->the input of data for test is random so we will have the boundary test case may occur during the end user providing inputs 
-
	-
	- 
	-
-
	-
	-
	-
	- 
	-
-
	-
	-
	-
	- 
	-
