<<<<<<< HEAD
#netperf -H192.168.2.1 -l360 -p 80 -- -m 90000 -M 90000 -S 90000 -s 90000
#netperf -t TCP_STREAM -H192.168.2.1 -p 80 -- -m 300 -M 300 -S 300 -s 300
=======
#netperf -H 134.117.197.1 -p 80 -l 100
>>>>>>> 4fff90664f33f2e4cb606b411cf0fedb784352f5
#testing
import subprocess;
#stdout="abc"
#stderr="def";
<<<<<<< HEAD
out =subprocess.Popen(['netperf', '-H192.168.2.1','-p 80'],stdout=subprocess.PIPE,stderr=subprocess.STDOUT);
=======
out =subprocess.Popen(['netperf', '-H 134.117.197.1','-p 80','-l 100'],stdout=subprocess.PIPE,stderr=subprocess.STDOUT);
>>>>>>> 4fff90664f33f2e4cb606b411cf0fedb784352f5
stdout,stderr = out.communicate()
print(stdout);
print(stderr);
stdout.split()[0];
stdout.split()[1];

