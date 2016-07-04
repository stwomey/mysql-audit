/*
 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; version 2 of the License.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA */

#include "mysql_inc.h"
#include "audit_handler.h"

//see offset-extract/readme.txt for explanation on how this was generated
#if !defined(MARIADB_BASE_VERSION)
#ifdef __x86_64__
//64 bit offsets
const ThdOffsets thd_offsets_arr[] =
{
	/* +++ MYSQL 64 OFFSETS GO HERE +++ */
	//offsets for: /mysqlrpm/5.5.50/usr/sbin/mysqld (5.5.50)
	{"5.5.50","c1b990f432d684f1d5abe3969146ee9d", 6144, 6192, 3816, 4312, 88, 2592, 96, 0, 32, 104, 120, 6264},
	//offsets for: /mysqlrpm/5.6.31/usr/sbin/mysqld (5.6.31)
	{"5.6.31","f0ca4df6f1b6f3e31aa4a1a94a94d84d", 6992, 7040, 4000, 4520, 72, 2704, 96, 0, 32, 104, 136, 7128},
	//offsets for: /mysqlrpm/5.7.13/usr/sbin/mysqld (5.7.13)
	{"5.7.13","4e5760fbaa0c91cd7e124d677ad8a728", 7800, 7848, 3624, 4776, 456, 360, 0, 32, 64, 160, 536, 7964},
	//offsets for: /mysqlrpm/5.7.12/usr/sbin/mysqld (5.7.12)
	{"5.7.12","f2061aef037c01412ecf9142fe627572", 7800, 7848, 3624, 4776, 456, 360, 0, 32, 64, 160, 536, 7964},
	//offsets for: /mysqlrpm/5.5.49/usr/sbin/mysqld (5.5.49)
	{"5.5.49","bae752665a4ebcff87a5933350cc1cbf", 6144, 6192, 3816, 4312, 88, 2592, 96, 0, 32, 104, 120, 6264},
	//offsets for: /mysqlrpm/5.6.30/usr/sbin/mysqld (5.6.30)
	{"5.6.30","84dd43523b638e4b2817ca9b53f204fe", 6992, 7040, 4000, 4520, 72, 2704, 96, 0, 32, 104, 136, 7128},
	//offsets for: /mysqlrpm/5.5.48/usr/sbin/mysqld (5.5.48)
	{"5.5.48","69b209f0c08027a501b1cb7a20e6e582", 6144, 6192, 3816, 4312, 88, 2592, 96, 0, 32, 104, 120, 6264},
	//offsets for: /mysqlrpm/5.6.29/usr/sbin/mysqld (5.6.29)
	{"5.6.29","badcd2b5b459d5fd6e4fb6a4bd3a1f91", 6992, 7040, 4000, 4520, 72, 2704, 96, 0, 32, 104, 136, 7128},
	//offsets for: /mysqlrpm/5.7.11/usr/sbin/mysqld (5.7.11)
	{"5.7.11","68ebf5245b47e43235466a2820cf5d46", 7792, 7840, 3616, 4768, 456, 360, 0, 32, 64, 160, 536, 7956},
	//offsets for: /mysqlrpm/5.7.10/usr/sbin/mysqld (5.7.10)
	{"5.7.10","8e9c0636d9263cea97498dd99e7841b6", 7784, 7832, 3608, 4760, 456, 360, 0, 32, 64, 160, 536, 7948},
	//offsets for: /mysqlrpm/5.7.9/usr/sbin/mysqld (5.7.9)
	{"5.7.9","1cb6f2ea6f98c2788d51a196afa153d9", 7784, 7832, 3608, 4760, 456, 360, 0, 32, 64, 160, 536, 7948},
	//offsets for: /mysqlrpm/5.5.47/usr/sbin/mysqld (5.5.47)
	{"5.5.47","a35964c285630302290dc1ad31bddd93", 6144, 6192, 3816, 4312, 88, 2592, 96, 0, 32, 104, 120, 6264},
	//offsets for: /mysqlrpm/5.6.28/usr/sbin/mysqld (5.6.28)
	{"5.6.28","a88464e4d2cb6d11311179166613c015", 6992, 7040, 4000, 4520, 72, 2704, 96, 0, 32, 104, 136, 7128},
	//offsets for: /mysqlrpm/5.6.27/usr/sbin/mysqld (5.6.27)
	{"5.6.27","212c7e3701046857fa6d7f1404f427d9", 6992, 7040, 4000, 4520, 72, 2704, 96, 0, 32, 104, 136, 7128},
	//offsets for: /mysqlrpm/5.5.46/usr/sbin/mysqld (5.5.46)
	{"5.5.46","f2e3131d0aedf9275073225efb4a83c4", 6144, 6192, 3816, 4312, 88, 2592, 96, 0, 32, 104, 120, 6264},
	//offsets for: /mysqlrpm/5.5.45/usr/sbin/mysqld (5.5.45)
	{"5.5.45","fc867721baf46f7b6158ad3ded16aa5e", 6144, 6192, 3816, 4312, 88, 2592, 96, 0, 32, 104, 120, 6264},
	//offsets for: /mysqlrpm/5.6.26/usr/sbin/mysqld (5.6.26)
	{"5.6.26","560ab8bd2c6513eac8283af1630e604a", 6992, 7040, 4000, 4520, 72, 2704, 96, 0, 32, 104, 136, 7128},
	//offsets for: /mysqlrpm/5.5.44/usr/sbin/mysqld (5.5.44)
	{"5.5.44","1291a4a24d7a87415660237d691e821f", 6144, 6192, 3816, 4312, 88, 2592, 96, 0, 32, 104, 120, 6264},
	//offsets for: /mysqlrpm/5.6.25/usr/sbin/mysqld (5.6.25)
	{"5.6.25","2e38dabed666cd8521f28e855a43b7ca", 6984, 7032, 4000, 4520, 72, 2704, 96, 0, 32, 104, 136, 7120},
	//offsets for: /mysqlrpm/5.5.43/usr/sbin/mysqld (5.5.43)
	{"5.5.43","d9bc90e06a5f97a4e6524bee2cd2ba62", 6136, 6184, 3816, 4312, 88, 2592, 96, 0, 32, 104, 120, 6256},
	//offsets for: /mysqlrpm/5.6.24/usr/sbin/mysqld (5.6.24)
	{"5.6.24","fa139b24fa0074925a76592a3beba284", 6976, 7024, 4000, 4520, 72, 2704, 96, 0, 32, 104, 136, 7112},
	//offsets for: /mysqlrpm/5.5.42/usr/sbin/mysqld (5.5.42)
	{"5.5.42","2b3289c6a80d166b0343677c31a99676", 6136, 6184, 3816, 4312, 88, 2592, 96, 0, 32, 104, 120, 6256},
	//offsets for: /mysqlrpm/5.6.23/usr/sbin/mysqld (5.6.23)
	{"5.6.23","088aac6f0be2f01ea83b101c5c327599", 7928, 7976, 3992, 4512, 72, 2704, 96, 0, 32, 104, 136, 8064},
	//offsets for: /mysqlrpm/5.5.41/usr/sbin/mysqld (5.5.41)
	{"5.5.41","66afe25ebb34b6099dda39f73f5fe615", 6136, 6184, 3816, 4312, 88, 2592, 96, 0, 32, 104},
	//offsets for: /mysqlrpm/5.6.22/usr/sbin/mysqld (5.6.22)
	{"5.6.22","6810010c49b77534274fe7ff9943575e", 7928, 7976, 3992, 4512, 72, 2704, 96, 0, 32, 104},
	//offsets for: /mysqlrpm/5.5.40/usr/sbin/mysqld (5.5.40)
	{"5.5.40","0ef1c3b1e694a2b780113f4641cb3c67", 6136, 6184, 3816, 4312, 88, 2592, 96, 0, 32, 104},
	//offsets for: /mysqlrpm/5.6.21/usr/sbin/mysqld (5.6.21)
	{"5.6.21","1dd6c0395ab46ef5464709be16812e06", 7928, 7976, 3992, 4512, 72, 2704, 96, 0, 32, 104},
	//offsets for: /mysqlrpm/5.5.39/usr/sbin/mysqld (5.5.39)
	{"5.5.39","fbaf65c0ac5464577e9fce4774260b50", 6136, 6184, 3816, 4312, 88, 2592, 96, 0, 32, 104},
	//offsets for: /mysqlrpm/5.6.20/usr/sbin/mysqld (5.6.20)
	{"5.6.20","cc7e6ee41d5b2859914dadcd8bbb33c8", 7928, 7976, 3992, 4512, 72, 2704, 96, 0, 32, 104},
	//offsets for: /mysqlrpm/5.5.38/usr/sbin/mysqld (5.5.38)
	{"5.5.38","ae5937fbe5856b36b1ac7b0cb400abdd", 6136, 6184, 3816, 4312, 88, 2592, 96, 0, 32, 104},
	//offsets for: /mysqlrpm/5.6.19/usr/sbin/mysqld (5.6.19)
	{"5.6.19","2a01471dc6b6b59ae25a7efe675d1af4", 7928, 7976, 3992, 4512, 72, 2704, 96, 0, 32, 104},
	//offsets for: mysqlrpm/5.1.30/usr/sbin/mysqld (5.1.30-community)
	{"5.1.30-community","8e43bda3644a883d46a1d064304b4f1d", 6184, 6248, 3656, 3928, 88, 2048},
	//offsets for: mysqlrpm/5.1.31/usr/sbin/mysqld (5.1.31-community)
	{"5.1.31-community","540d4cf28ea559a0edea0ee971c9a107", 6192, 6256, 3664, 3936, 88, 2040},
	//offsets for: mysqlrpm/5.1.32/usr/sbin/mysqld (5.1.32-community)
	{"5.1.32-community","b75c7d571e9d12b8c37ceafb9042c987", 6192, 6256, 3664, 3936, 88, 2040},
	//offsets for: mysqlrpm/5.1.33/usr/sbin/mysqld (5.1.33-community)
	{"5.1.33-community","56e820a385ff22f732e0638aa262b447", 6192, 6256, 3664, 3936, 88, 2048},
	//offsets for: mysqlrpm/5.1.34/usr/sbin/mysqld (5.1.34-community)
	{"5.1.34-community","da3c0f88578725356b04e7631591bef3", 6200, 6264, 3672, 3944, 88, 2048},
	//offsets for: mysqlrpm/5.1.35/usr/sbin/mysqld (5.1.35-community)
	{"5.1.35-community","c2676c2496fea6741ebd5df7cf7ce444", 6200, 6264, 3672, 3944, 88, 2048},
	//offsets for: mysqlrpm/5.1.36/usr/sbin/mysqld (5.1.36-community)
	{"5.1.36-community","3de797ee36be61a8221a6093eb9c649e", 6200, 6264, 3672, 3944, 88, 2048},
	//offsets for: mysqlrpm/5.1.37/usr/sbin/mysqld (5.1.37-community)
	{"5.1.37-community","508ffea25280c9454dcef065e5fd4af2", 6200, 6264, 3672, 3944, 88, 2048},
	//offsets for: mysqlrpm/5.1.38/usr/sbin/mysqld (5.1.38-community)
	{"5.1.38-community","3bf0d4cc9fded79b76e5467c1b5dac82", 6200, 6264, 3672, 3944, 88, 2048},
	//offsets for: mysqlrpm/5.1.39/usr/sbin/mysqld (5.1.39-community)
	{"5.1.39-community","deca5ca3813a9d4157f37f5280be8a26", 6200, 6264, 3672, 3944, 88, 2048},
	//offsets for: mysqlrpm/5.1.40/usr/sbin/mysqld (5.1.40-community)
	{"5.1.40-community","6ce779a6883b69a1ba28ca5640e60a55", 6200, 6264, 3672, 3944, 88, 2048},
	{"5.1.40-community","2fa8842d7685c8c7d4a1cdd8533d7f62", 6200, 6264, 3672, 3944, 88, 2048},
	//offsets for: mysqlrpm/5.1.41/usr/sbin/mysqld (5.1.41-community)
	{"5.1.41-community","6ccf4357688d8e46bfcb4443966970b0", 6200, 6264, 3672, 3944, 88, 2048},
	//offsets for: mysqlrpm/5.1.42/usr/sbin/mysqld (5.1.42-community)
	{"5.1.42-community","8dd9f47e0998958d8826aa2a2487114e", 6200, 6264, 3672, 3944, 88, 2048},
	//offsets for: mysqlrpm/5.1.43/usr/sbin/mysqld (5.1.43-community)
	{"5.1.43-community","bcd73a2b710327861608fc3d3464f8df", 6200, 6264, 3672, 3944, 88, 2048},
	//offsets for: mysqlrpm/5.1.44/usr/sbin/mysqld (5.1.44-community)
	{"5.1.44-community","e059b94720daa145d9807a33e9c450b9", 6208, 6272, 3680, 3952, 88, 2048},
	//offsets for: mysqlrpm/5.1.45/usr/sbin/mysqld (5.1.45-community)
	{"5.1.45-community","7f681b9441bf05f20c4b1b5e7f580269", 6208, 6272, 3680, 3952, 88, 2048},
	//offsets for: mysqlrpm/5.1.46/usr/sbin/mysqld (5.1.46-community)
	{"5.1.46-community","7e16a80f8593ce5dc65042101c572b9c", 6208, 6272, 3680, 3952, 88, 2048},
	//offsets for: mysqlrpm/5.1.47/usr/sbin/mysqld (5.1.47-community)
	{"5.1.47-community","8a4de4573d4037cc27adf45ab7275544", 6336, 6400, 3688, 3960, 88, 2048},
	//offsets for: mysqlrpm/5.1.48/usr/sbin/mysqld (5.1.48-community)
	{"5.1.48-community","10ac2c73ff9476752f15c5658bc3d5ce", 6336, 6400, 3688, 3960, 88, 2048},
	//offsets for: mysqlrpm/5.1.49/usr/sbin/mysqld (5.1.49-community)
	{"5.1.49-community","85c8cd6984de26580ddf49d87ea76c43", 6336, 6400, 3688, 3960, 88, 2048},
	//offsets for: mysqlrpm/5.1.50/usr/sbin/mysqld (5.1.50-community)
	{"5.1.50-community","174ce50cfc926bfb04701acdd1d7489d", 6336, 6400, 3688, 3960, 88, 2048},
	//offsets for: mysqlrpm/5.1.51/usr/sbin/mysqld (5.1.51-community)
	{"5.1.51-community","4ebe71217f34c38fc80c8aa2c4ddcca8", 6336, 6400, 3688, 3960, 88, 2048},
	//offsets for: mysqlrpm/5.1.52/usr/sbin/mysqld (5.1.52-community)
	{"5.1.52-community","bbb6ca9baf04a4c596e53c49a1e34589", 6336, 6400, 3688, 3960, 88, 2048},
	//offsets for: mysqlrpm/5.1.53/usr/sbin/mysqld (5.1.53-community)
	{"5.1.53-community","90d9cd7d6c2793e31e42aaa378dbe044", 6336, 6400, 3688, 3960, 88, 2048},
	//offsets for: mysqlrpm/5.1.54/usr/sbin/mysqld (5.1.54-community)
	{"5.1.54-community","c23b86ac2f64e9de6731fef97e79c98e", 6336, 6400, 3688, 3960, 88, 2048},
	//offsets for: mysqlrpm/5.1.55/usr/sbin/mysqld (5.1.55-community)
	{"5.1.55-community","e5d0694364a5e14dd227cb3c28ea0928", 6336, 6400, 3688, 3960, 88, 2048},
	//offsets for: mysqlrpm/5.1.56/usr/sbin/mysqld (5.1.56-community)
	{"5.1.56-community","fd16157ab06cc0cfb3eba40e9936792c", 6336, 6400, 3688, 3960, 88, 2048},
	//offsets for: /usr/sbin/mysqld (5.1.56-ndb-7.1.18-cluster-gpl)
	{"5.1.56-ndb-7.1.18-cluster-gpl","ee9cc4dd2f0e9db04dce32867fcf599e", 6304, 6368, 3640, 3912, 88, 2048},
	//offsets for: mysqlrpm/5.1.57/usr/sbin/mysqld (5.1.57-community)
	{"5.1.57-community","4c6d32f80c20657983f7ac316c6a6e10", 6336, 6400, 3688, 3960, 88, 2048},
	//offsets for: mysqlrpm/5.1.58/usr/sbin/mysqld (5.1.58-community)
	{"5.1.58-community","e42752084a90c708a94779d26589b748", 6336, 6400, 3688, 3960, 88, 2048},
	{"5.1.58-community","032d4f14464851e724281f8b692578a2", 6336, 6400, 3688, 3960, 88, 2048},
	//offsets for: /usr/sbin/mysqld (5.1.58-community)
	{"5.1.58-community","7c51a8f1aabece893982e0cafac8dcee", 6336, 6400, 3688, 3960, 88, 2048},
	//offsets for: /mysqlrpm/5.1.59/usr/sbin/mysqld (5.1.59-community)
	{"5.1.59-community","9463387bf70c07376a52a93bf44c51f0", 6328, 6392, 3688, 3960, 88, 2048},
	//offsets for: /mysqlrpm/5.1.60/usr/sbin/mysqld (5.1.60-community)
	{"5.1.60-community","d9497964e8983a348538c0d05eaee7f0", 6328, 6392, 3688, 3960, 88, 2048},
	//offsets for: /mysqlrpm/5.1.61/usr/sbin/mysqld (5.1.61-community)
	{"5.1.61-community","bda6030d35e7fafa5b1e57154a53b804", 6328, 6392, 3688, 3960, 88, 2048},
	//offsets for: /mysqlrpm/5.1.62/usr/sbin/mysqld (5.1.62-community)
	{"5.1.62-community","a4e8de89e0d9a353d09687d3b4560cb3", 6328, 6392, 3688, 3960, 88, 2048},
	//offsets for: /mysqlrpm/5.1.63/usr/sbin/mysqld (5.1.63-community)
	{"5.1.63-community","0f4d7e3b17eb36f17aafe4360993a769", 6328, 6392, 3688, 3960, 88, 2048},
	//offsets for: /mysqlrpm/5.1.65/usr/sbin/mysqld (5.1.65-community)
	{"5.1.65-community","4df4c0dfe11913bd1ef2bb3a6bc7a40e", 6376, 6440, 3736, 4008, 88, 2056},
	//offsets for: /mysqlrpm/5.1.66/usr/sbin/mysqld (5.1.66-community)
	{"5.1.66-community","544ed94102b82425e7592e7d7474fce4", 6376, 6440, 3736, 4008, 88, 2056},
	//offsets for: /mysqlrpm/5.1.67/usr/sbin/mysqld (5.1.67-community)
	{"5.1.67-community","f67df6f2416940dbabff460b83b63677", 6376, 6440, 3736, 4008, 88, 2056},
	//offsets for: /mysqlrpm/5.1.68/usr/sbin/mysqld (5.1.68-community)
	{"5.1.68-community","4042e9a2778090df6fd8481e03ed6737", 6376, 6440, 3736, 4008, 88, 2056},
	//offsets for: /mysqlrpm/5.1.69/usr/sbin/mysqld (5.1.69-community)
	{"5.1.69-community","e9cb524b604419964f4dd55a8c87d618", 6376, 6440, 3736, 4008, 88, 2056},
	//offsets for: mysqlrpm/5.5.8/usr/sbin/mysqld (5.5.8)
	{"5.5.8","70a882693d54df8ab7c7d9f256e317bb", 6032, 6080, 3776, 4200, 88, 2560},
	//offsets for: mysqlrpm/5.5.9/usr/sbin/mysqld (5.5.9)
	{"5.5.9","262554c75df0b890e08c5c2500391342", 6056, 6104, 3800, 4224, 88, 2560},
	//offsets for: mysqlrpm/5.5.10/usr/sbin/mysqld (5.5.10)
	{"5.5.10","f9d15e7ff70ad177923b9d2a14b9bc19", 6056, 6104, 3800, 4224, 88, 2560},
	//offsets for: mysqlrpm/5.5.11/usr/sbin/mysqld (5.5.11)
	{"5.5.11","04a7049ba1c099e00dcdc6f1d98078aa", 6048, 6096, 3792, 4216, 88, 2560},
	//offsets for: mysqlrpm/5.5.12/usr/sbin/mysqld (5.5.12)
	{"5.5.12","91df7918803df78b164f46706003e22d", 6048, 6096, 3792, 4216, 88, 2560},
	//offsets for: mysqlrpm/5.5.13/usr/sbin/mysqld (5.5.13)
	{"5.5.13","f13cbe2c1a5247c52d592ac199b8d9af", 6048, 6096, 3792, 4216, 88, 2560},
	//offsets for: mysqlrpm/5.5.14/usr/sbin/mysqld (5.5.14)
	{"5.5.14","4fb94eac7eaa2dc9bbf3ee773a54197e", 6048, 6096, 3792, 4216, 88, 2560},
	{"5.5.15-debug", "", 6256, 6304, 3992, 4424, 88, 2560},
	//offsets for: mysqlrpm/5.5.15/usr/sbin/mysqld (5.5.15)
	{"5.5.15","d3c2a51a84cbec77c2fb92f1ea414ec3", 6048, 6096, 3792, 4216, 88, 2560},
	//offsets for: mysqlrpm/5.5.16/usr/sbin/mysqld (5.5.16)
	{"5.5.16","289c64d14b132c67fd22cd6404817bc3", 6040, 6088, 3792, 4216, 88, 2560},
	//offsets for: mysqlrpm/5.5.17/usr/sbin/mysqld (5.5.17)
	{"5.5.17","9c6b2f65b1015f924fb74408d2968339", 6040, 6088, 3792, 4216, 88, 2560},
	//offsets for: mysqlrpm/5.5.18/usr/sbin/mysqld (5.5.18)
	{"5.5.18","60d191bfeea1232e86fa4ad54ae46b10", 6040, 6088, 3792, 4216, 88, 2560},
	{"5.5.18","099d31c0cd0754934b84c17f683d019e", 6040, 6088, 3792, 4216, 88, 2560},
	//offsets for: mysqlrpm/5.5.19/usr/sbin/mysqld (5.5.19)
	{"5.5.19","0765dadb23315bb076bc6e21cfb2de40", 6048, 6096, 3800, 4224, 88, 2560},
	//offsets for: /mysqlrpm/5.5.20/usr/sbin/mysqld (5.5.20)
	{"5.5.20","9f6122576930c5d09ca9244094c83f24", 6048, 6096, 3800, 4224, 88, 2560},
	//offsets for: mysqlrpm/5.5.21/usr/sbin/mysqld (5.5.21)
	{"5.5.21","4a03ad064ed393dabdde175f3ea05ff2", 6048, 6096, 3800, 4224, 88, 2560},
	//offsets for percona rpm (redhat 6): /usr/sbin/mysqld (5.5.21-55)
	{"5.5.21-55","e4f1b39e9dca4edc51b8eb6aa09e2fa4", 6464, 6512, 4072, 4512, 88, 2576},
	//offsets for: mysqlrpm/5.5.22/usr/sbin/mysqld (5.5.22)
	{"5.5.22","f3592147108e65d92cb18fb4d900c4ab", 6048, 6096, 3800, 4224, 88, 2560},
	//offsets for: Percona-Server-server-55-5.5.22-rel25.2.237.rhel5.x86_64/usr/sbin/mysqld (5.5.22-55)
	{"5.5.22-55","0865d71ff0159d3f79f7e277e6010f92", 6456, 6504, 4064, 4504, 104, 2576},
	//offsets for: mysqlrpm/5.5.23/usr/sbin/mysqld (5.5.23)
	{"5.5.23","aac33433f75b9758e7f42fad6991fa9e", 6048, 6096, 3800, 4224, 88, 2568},
	//offsets for: mysqlrpm/5.5.24/usr/sbin/mysqld (5.5.24)
	{"5.5.24","2915a9dd079446149b17d0d1c478fb11", 6048, 6096, 3800, 4224, 88, 2568},
	//offsets for: /mysqlrpm/5.5.25/usr/sbin/mysqld (5.5.25)
	{"5.5.25","6043eff2cfa493d4e020cae65c41b030", 6056, 6104, 3808, 4232, 88, 2568},
	//offsets for: mysqlrpm/5.5.25a/usr/sbin/mysqld (5.5.25a)
	{"5.5.25a","b59c03244daf51d4327409288d8c889f", 6056, 6104, 3808, 4232, 88, 2568},
	//offsets for: /mysqlrpm/5.5.27/usr/sbin/mysqld (5.5.27)
	{"5.5.27","8a3bd2ea1db328f4443fc25a79450ff3", 6056, 6104, 3808, 4232, 88, 2568},
	//offsets for: /mysqlrpm/5.5.28/usr/sbin/mysqld (5.5.28)
	{"5.5.28","588a710a1aec3043203261af72a13219", 6056, 6104, 3808, 4232, 88, 2568},
	//offsets for: /mysqlrpm/5.5.29/usr/sbin/mysqld (5.5.29)
	{"5.5.29","c1991059f9db3e4d5f23f34d9ff9c1d5", 6056, 6104, 3808, 4232, 88, 2568},
	//offsets for: cluster-7.2.10-linux-rhel5-x86-64bit/cluster/bin/mysqld (5.5.29-ndb-7.2.10-cluster-commercial-advanced-log)
	{"5.5.29-ndb-7.2.10-cluster-commercial-advanced","7fae09caa49af8bced6d250587cc2fcb", 6088, 6136, 3808, 4232, 88, 2568},
	//offsets for: /mysqlrpm/5.5.30/usr/sbin/mysqld (5.5.30)
	{"5.5.30","2c92adf1c8c4cef089bd487a56d72288", 6064, 6112, 3816, 4240, 88, 2568},
	//offsets for: mysql-cluster-advanced-7.2.12-linux2.6-x86_64/bin/mysqld (5.5.30-ndb-7.2.12-cluster-commercial-advanced)
	{"5.5.30-ndb-7.2.12-cluster-commercial-advanced","9f96bc38bf06a9b18a945227ff9e5c42", 6096, 6144, 3816, 4240, 88, 2568},
	//offsets for: /mysqlrpm/5.5.31/usr/sbin/mysqld (5.5.31)
	{"5.5.31","f6604e70b9592f484a7a04a0173f0b25", 6064, 6112, 3816, 4240, 88, 2568},
	//offsets for: MySQL-server-5.6.10-1.el6.x86_64/usr/sbin/mysqld (5.6.10)
	{"5.6.10","7016428728fe057d6825682d30e37b3d", 7808, 7856, 3960, 4400, 72, 2664},
	//offsets for: /mysqlrpm/5.6.10/usr/sbin/mysqld (5.6.10)
	{"5.6.10","3b34d181e1d9baa4534fe1146ceb0ce9", 7808, 7856, 3960, 4400, 72, 2664},
	//offsets for: /mysqlrpm/5.6.11/usr/sbin/mysqld (5.6.11)
	{"5.6.11","452f9bb49741bfc97d0266120016d77b", 7808, 7856, 3960, 4400, 72, 2672},
	//offsets for: /usr/sbin/mysqld (5.6.12)
	{"5.6.12","8ec14d79a5fcb0e9a55b5e4da39b9896", 7816, 7864, 3960, 4400, 72, 2688},

	//DISTRIBUTION: tar.gz
	//offsets for: /mysql/5.1.30/bin/mysqld (5.1.30)
	{"5.1.30","b301b32be659367c1a1900b47534fd59", 6192, 6256, 3664, 3936, 88, 2048},
	//offsets for: /mysql/5.1.31/bin/mysqld (5.1.31)
	{"5.1.31","2d8be9bf479678b3f2bd3214f1f04c7e", 6200, 6264, 3672, 3944, 88, 2040},
	//offsets for: /mysql/5.1.32/bin/mysqld (5.1.32)
	{"5.1.32","c585253cf70944471c936962a318a81a", 6200, 6264, 3672, 3944, 88, 2040},
	//offsets for: /mysql/5.1.33/bin/mysqld (5.1.33)
	{"5.1.33","99d8cbc22dc2919abe530ed61a52c89d", 6200, 6264, 3672, 3944, 88, 2048},
	//offsets for: /mysql/5.1.34/bin/mysqld (5.1.34)
	{"5.1.34","47b8eb2e619dd953e4ce6cf468a19c6e", 6208, 6272, 3680, 3952, 88, 2048},
	//offsets for: /mysql/5.1.35/bin/mysqld (5.1.35)
	{"5.1.35","950a25d0a4e4e100b72d60ffd451e93a", 6208, 6272, 3680, 3952, 88, 2048},
	//offsets for: /mysql/5.1.36/bin/mysqld (5.1.36)
	{"5.1.36","758c2ac0375425a43cd815d3a2c10132", 6208, 6272, 3680, 3952, 88, 2048},
	//offsets for: /mysql/5.1.37/bin/mysqld (5.1.37)
	{"5.1.37","4e7bfc2705eea482a19b710944dc5ff5", 6208, 6272, 3680, 3952, 88, 2048},
	//offsets for: /mysql/5.1.38/bin/mysqld (5.1.38)
	{"5.1.38","09e8ac98651439fd4f22b508178cd0ef", 6208, 6272, 3680, 3952, 88, 2048},
	//offsets for: /mysql/5.1.39/bin/mysqld (5.1.39)
	{"5.1.39","b6c4acb0a9a4ff71ab5e26ed010d20c9", 6208, 6272, 3680, 3952, 88, 2048},
	//offsets for: /mysql/5.1.40/bin/mysqld (5.1.40)
	{"5.1.40","bc663cdf0a8411526dc9eb44dff5773f", 6208, 6272, 3680, 3952, 88, 2048},
	//offsets for: /mysql/5.1.41/bin/mysqld (5.1.41)
	{"5.1.41","ebf47135d6fe9099cd62db1dea2c4ca6", 6208, 6272, 3680, 3952, 88, 2048},
	//offsets for: /mysql/5.1.42/bin/mysqld (5.1.42)
	{"5.1.42","a7b55239789304978d8250697a3c73fc", 6208, 6272, 3680, 3952, 88, 2048},
	//offsets for: /mysql/5.1.43/bin/mysqld (5.1.43)
	{"5.1.43","96e95d0b1461f4484e571af01c01bc4a", 6208, 6272, 3680, 3952, 88, 2048},
	//offsets for: /mysql/5.1.44/bin/mysqld (5.1.44)
	{"5.1.44","ecf6919ce6d4e74d108644ab122ff1fb", 6216, 6280, 3688, 3960, 88, 2048},
	//offsets for: /mysql/5.1.45/bin/mysqld (5.1.45)
	{"5.1.45","657c7e712a894ebe3b3db9b26cc3ebd7", 6216, 6280, 3688, 3960, 88, 2048},
	//offsets for: /mysql/5.1.46/bin/mysqld (5.1.46)
	{"5.1.46","990b3bafe5d55dc1a9084791623191ca", 6216, 6280, 3688, 3960, 88, 2048},
	//offsets for: /mysql/5.1.47/bin/mysqld (5.1.47)
	{"5.1.47","9868b07a44f8d5de8bc5716e3f680139", 6344, 6408, 3696, 3968, 88, 2048},
	//offsets for: /mysql/5.1.48/bin/mysqld (5.1.48)
	{"5.1.48","e812133194ff8e0cd25945c327e07f6c", 6344, 6408, 3696, 3968, 88, 2048},
	//offsets for: /mysql/5.1.49/bin/mysqld (5.1.49)
	{"5.1.49","4869d51b5bfc38f7698059e2696a95ca", 6344, 6408, 3696, 3968, 88, 2048},
	//offsets for: /mysql/5.1.50/bin/mysqld (5.1.50)
	{"5.1.50","316a6b674d66cb151bac384cb0508357", 6344, 6408, 3696, 3968, 88, 2048},
	//offsets for: /mysql/5.1.51/bin/mysqld (5.1.51)
	{"5.1.51","b9f831f698cd7fa85abe112bb99c8861", 6344, 6408, 3696, 3968, 88, 2048},
	//offsets for: /mysql/5.1.52/bin/mysqld (5.1.52)
	{"5.1.52","c31f9c5d042e8793b3f192fa04f0e628", 6344, 6408, 3696, 3968, 88, 2048},
	//offsets for: /mysql/5.1.53/bin/mysqld (5.1.53)
	{"5.1.53","07a3ae20e262306e708760889ff2705b", 6344, 6408, 3696, 3968, 88, 2048},
	//offsets for: /mysql/5.1.54/bin/mysqld (5.1.54)
	{"5.1.54","9fca5d956c33e646920e68c541aabcae", 6344, 6408, 3696, 3968, 88, 2048},
	//offsets for: /mysql/5.1.55/bin/mysqld (5.1.55)
	{"5.1.55","54457f3bc49d7ac7497f4212538c8ddc", 6344, 6408, 3696, 3968, 88, 2048},
	//offsets for: /mysql/5.1.56/bin/mysqld (5.1.56)
	{"5.1.56","1a901cb4c1ff55aeab04ba4ba9e5f4ec", 6344, 6408, 3696, 3968, 88, 2048},
	//offsets for: /mysql/5.1.57/bin/mysqld (5.1.57)
	{"5.1.57","c3c4f7c4403e501b11c532fb4eccf68b", 6344, 6408, 3696, 3968, 88, 2048},
	//offsets for: /mysql/5.1.58/bin/mysqld (5.1.58)
	{"5.1.58","3e93f9d332fb8e3b9481f4620361f481", 6344, 6408, 3696, 3968, 88, 2048},
	{"5.1.58","5620fefe93dbc46cb2d488a054d2e81a", 6344, 6408, 3696, 3968, 88, 2048},
	//offsets for: /mysql/5.1.59/bin/mysqld (5.1.59)
	{"5.1.59","61fe56a6bcd71a9ea6026322f459555b", 6336, 6400, 3696, 3968, 88, 2048},
	//offsets for: /mysql/5.1.60/bin/mysqld (5.1.60)
	{"5.1.60","5407e492f802cca03eccb2211205632d", 6336, 6400, 3696, 3968, 88, 2048},
	//offsets for: /mysql/5.1.61/bin/mysqld (5.1.61)
	{"5.1.61","c2ce56446b33ee22c16160b3f8206541", 6336, 6400, 3696, 3968, 88, 2048},
	//offsets for: /mysql/5.1.62/bin/mysqld (5.1.62)
	{"5.1.62","5ab9ae376d93b71120e1c9dc2129c580", 6336, 6400, 3696, 3968, 88, 2048},
	//offsets for: /mysql/5.1.63/bin/mysqld (5.1.63)
	{"5.1.63","ea56cc85859f146c42957177524492c3", 6336, 6400, 3696, 3968, 88, 2048},
	//offsets set by https://github.com/creechy
	{"5.1.63","2a6d7c81179baf6bc6bbb807b8b54967", 6336, 6400, 3696, 3968, 88, 2048},
	//offsets for: /mysql/5.1.65/bin/mysqld (5.1.65)
	{"5.1.65","65d905e173c06316b736ee4e9be15baf", 6392, 6456, 3752, 4024, 88, 2056},
	//offsets for: /mysql/5.1.66/bin/mysqld (5.1.66)
	{"5.1.66","2cd9a97779d436d1d5d045eb12620ef0", 6392, 6456, 3752, 4024, 88, 2056},
	//offsets for: /mysql/5.1.67/bin/mysqld (5.1.67)
	{"5.1.67","a33947226f24f59d30e7c40c61d840ca", 6392, 6456, 3752, 4024, 88, 2056},
	//offsets for: /mysql/5.1.68/bin/mysqld (5.1.68)
	{"5.1.68","673dd031ea4ad3493b47d74662a49079", 6392, 6456, 3752, 4024, 88, 2056},
	//offsets for: /mysql/5.1.69/bin/mysqld (5.1.69)
	{"5.1.69","af2936f85db019bfd44c7e12a2138707", 6392, 6456, 3752, 4024, 88, 2056},
	//offsets for: mysql/5.5.8/bin/mysqld (5.5.8)
	{"5.5.8","a32b163f08ca8bfd7486cd77200d9df3", 6032, 6080, 3776, 4200, 88, 2560},
	//offsets for: mysql/5.5.9/bin/mysqld (5.5.9)
	{"5.5.9","7b01c8b42a47f3541ee62b1e3f1b7816", 6056, 6104, 3800, 4224, 88, 2560},
	//offsets for: mysql/5.5.10/bin/mysqld (5.5.10)
	{"5.5.10","de2bb7a3fa3cea8c3aae9e0c544ab8f4", 6056, 6104, 3800, 4224, 88, 2560},
	//offsets for: mysql/5.5.11/bin/mysqld (5.5.11)
	{"5.5.11","cc565bd5de75d86ccf9371789afa3a15", 6048, 6096, 3792, 4216, 88, 2560},
	//offsets for: mysql/5.5.12/bin/mysqld (5.5.12)
	{"5.5.12","a37a096e0c6afa81d023368434432a70", 6048, 6096, 3792, 4216, 88, 2560},
	//offsets for: mysql/5.5.13/bin/mysqld (5.5.13)
	{"5.5.13","299abd40c9b5cf9421083aeddc8cfb66", 6048, 6096, 3792, 4216, 88, 2560},
	//offsets for: mysql/5.5.14/bin/mysqld (5.5.14)
	{"5.5.14","98c716bb1ad38cf018d881dbf578fade", 6048, 6096, 3792, 4216, 88, 2560},
	//offsets for: mysql/5.5.15/bin/mysqld (5.5.15)
	{"5.5.15","73a45e429c63542efbb70bcf56d869be", 6048, 6096, 3792, 4216, 88, 2560},
	{"5.5.15-debug","",  6256, 6304, 3992, 4424, 88, 2560},
	//offsets for: mysql/5.5.16/bin/mysqld (5.5.16)
	{"5.5.16","9f4b0b7f721a0d57822c3e7417dec532", 6040, 6088, 3792, 4216, 88, 2560},
	//offsets for: mysql/5.5.17/bin/mysqld (5.5.17)
	{"5.5.17","1998ce51314f86b587891dd80db067d6", 6040, 6088, 3792, 4216, 88, 2560},
	//offsets for: mysql/5.5.18/bin/mysqld (5.5.18)
	{"5.5.18","d0a874863943e837a685e7fc4af02a87", 6040, 6088, 3792, 4216, 88, 2560},
	//offsets for: mysql/5.5.19/bin/mysqld (5.5.19)
	//offsets for: /usr/sbin/mysqld (5.5.18)
	{"5.5.18","099d31c0cd0754934b84c17f683d019e", 6040, 6088, 3792, 4216, 88, 2560},
	{"5.5.19","f000f941c4e4f7b84e66d7b8c115ca8f", 6048, 6096, 3800, 4224, 88, 2560},
	//offsets for: /mysql/5.5.20/bin/mysqld (5.5.20)
	{"5.5.20","8b68e84332b442d58a46ae4299380a99", 6048, 6096, 3800, 4224, 88, 2560},
	//offsets for: mysql/5.5.21/bin/mysqld (5.5.21)
	{"5.5.21","66d23cb577e2bcfe29da08833f5e7d8b", 6048, 6096, 3800, 4224, 88, 2560},
	//offsets for percona: Percona-Server-5.5.21-rel25.0-227.Linux.x86_64/bin/mysqld (5.5.21-rel25.0)
	{"5.5.21-rel25.0","346a87d97dbf5d7aad3a9f7f707f9477", 6464, 6512, 4072, 4512, 88, 2576},
	//offsets for: /mysql/5.5.22/bin/mysqld (5.5.22)
	{"5.5.22","9152de65a0de0594f46e1db0d0c9a182", 6048, 6096, 3800, 4224, 88, 2560},
	//offsets for: /mysql/5.5.23/bin/mysqld (5.5.23)
	{"5.5.23","da3c9d8e3bf1c1235d283cbfad1631ab", 6048, 6096, 3800, 4224, 88, 2568},
	//offsets for: /mysql/5.5.24/bin/mysqld (5.5.24)
	{"5.5.24","5cb90eb8d4080f50fd7a432ad9eb75e0", 6048, 6096, 3800, 4224, 88, 2568},
	//offsets for: /mysql/5.5.25/bin/mysqld (5.5.25)
	{"5.5.25","3c19465f6b6f2daecb7a2d7ac1592824", 6056, 6104, 3808, 4232, 88, 2568},
	//offsets for: /mysql/5.5.27/bin/mysqld (5.5.27)
	{"5.5.27","0c6d305da14143ac17bf8964243234a4", 6056, 6104, 3808, 4232, 88, 2568},
	//offsets for: /mysql/5.5.28/bin/mysqld (5.5.28)
	{"5.5.28","8fbd19126907af43440baa4584dc7d28", 6056, 6104, 3808, 4232, 88, 2568},
	//offsets for: /mysql/5.5.29/bin/mysqld (5.5.29)
	{"5.5.29","495fc2576127ab851baa1ebb39a8f6fe", 6056, 6104, 3808, 4232, 88, 2568},
	//offsets for: /mysql/5.5.30/bin/mysqld (5.5.30)
	{"5.5.30","a2a8aba9c124315c17634556a303f87a", 6064, 6112, 3816, 4240, 88, 2568},
	//offsets for: MySQL-server-5.5.31-2.rhel5.x86_64/usr/sbin/mysqld (5.5.31)
	{"5.5.31","858dc19ffc5d34e669ab85d32a8a0623", 6064, 6112, 3816, 4240, 88, 2568},
	//offsets for: /mysql/5.5.31/bin/mysqld (5.5.31)
	{"5.5.31","61e65a4cc9360e03f3810ef2928c916d", 6064, 6112, 3816, 4240, 88, 2568},
	//offsets for: /mysql/5.6.10/bin/mysqld (5.6.10)
	{"5.6.10","37f9c31dd092bb2d0da7eb6e2098732f", 7808, 7856, 3960, 4400, 72, 2664},
	//offsets for: /mysql/5.6.11/bin/mysqld (5.6.11)
	{"5.6.11","85fd884192cc5cd12fba52b7b140c819", 7808, 7856, 3960, 4400, 72, 2672},
	//offsets for: /mysqlrpm/5.1.70/usr/sbin/mysqld (5.1.70-community)
	{"5.1.70-community","e70f9d48dad2a30b24e6c2744bed94d2", 6376, 6440, 3736, 4008, 88, 2072},
	//offsets for: /mysqlrpm/5.5.32/usr/sbin/mysqld (5.5.32)
	{"5.5.32","0a8f2dab859c59656a7ee18f1c97746b", 6064, 6112, 3816, 4240, 88, 2592},
	//offsets for: /mysqlrpm/5.6.12/usr/sbin/mysqld (5.6.12)
	{"5.6.12","647c61f9e2e42a6b8af67ad7f3268858", 7816, 7864, 3960, 4400, 72, 2688},
	//offsets for: /mysql/5.1.70/bin/mysqld (5.1.70)
	{"5.1.70","67b86b3ffff1196ac6702a89cd41ff84", 6392, 6456, 3752, 4024, 88, 2072},
	//offsets for: /mysql/5.5.32/bin/mysqld (5.5.32)
	{"5.5.32","97829c2915124a7cfa605d3f39bea354", 6064, 6112, 3816, 4240, 88, 2592},
	//offsets for: /mysql/5.6.12/bin/mysqld (5.6.12)
	{"5.6.12","3a6bb81a7f1239eb810a06a3b0c5dc2a", 7816, 7864, 3960, 4400, 72, 2688},
	//offsets for: /mysqlrpm/5.1.71/usr/sbin/mysqld (5.1.71-community)
	{"5.1.71-community","c8453ca637925c878356ca43eef8f654", 6376, 6440, 3736, 4008, 88, 2072},
	//offsets for: /mysqlrpm/5.5.33/usr/sbin/mysqld (5.5.33)
	{"5.5.33","88b02a9e61f5faedcf2d64a9b0239f38", 6064, 6112, 3816, 4240, 88, 2592},
	//offsets for: /mysqlrpm/5.6.13/usr/sbin/mysqld (5.6.13)
	{"5.6.13","441bbd39cf3df4847289f4cd4b2b3dc3", 7816, 7864, 3960, 4400, 72, 2688},
	//offsets for: /mysql/5.1.71/bin/mysqld (5.1.71)
	{"5.1.71","f648e9c956c85fbb1fbe8250df518755", 6392, 6456, 3752, 4024, 88, 2072},
	//offsets for: /mysql/5.5.33/bin/mysqld (5.5.33)
	{"5.5.33","59bf9fe80d6005e38238bc083b5aef51", 6064, 6112, 3816, 4240, 88, 2592},
	//offsets for: /mysql/5.6.13/bin/mysqld (5.6.13)
	{"5.6.13","137c18e72cfe17d4fcacda209e405234", 7816, 7864, 3960, 4400, 72, 2688},
	//offsets for: /mysql-5.5.34-linux2.6-x86_64/bin/mysqld (5.5.34)
	{"5.5.34","94d083ef0a7f964dedb94684eb06c7e7", 6136, 6184, 3816, 4312, 88, 2592, 96, 0, 32, 104},
	//offsets for: /mysqlrpm/5.5.34/usr/sbin/mysqld (5.5.34)
	{"5.5.34","b146111cae431cbb3d20322cc0a8e3be", 6136, 6184, 3816, 4312, 88, 2592, 96, 0, 32, 104},
	//offsets for: /mysqlrpm/5.6.14/usr/sbin/mysqld (5.6.14)
	{"5.6.14","42907ed406036f7d651a73547a611be0", 7888, 7936, 3960, 4472, 72, 2696, 96, 0, 32, 104},
	//offsets for: /mysqlrpm/5.1.72/usr/sbin/mysqld (5.1.72-community)
	{"5.1.72-community","c53f0d8b4d400755e8c476cd512dcea3", 6384, 6448, 3736, 4008, 88, 2072, 8, 0, 24, 16},
	//offsets for: /mysql/5.1.72/bin/mysqld (5.1.72)
	{"5.1.72","f560445d3c5f98a88d50878b2cd661c0", 6400, 6464, 3752, 4024, 88, 2072, 8, 0, 24, 16},
	//offsets for: /mysqlrpm/5.1.73/usr/sbin/mysqld (5.1.73-community)
	{"5.1.73-community","85cdb461556846fb29cbbaae49dfde94", 6384, 6448, 3736, 4008, 88, 2072, 8, 0, 24, 16},
	//offsets for: /mysqlrpm/5.5.35/usr/sbin/mysqld (5.5.35)
	{"5.5.35","09c5971f9df91d9fde18e969f66d9ff7", 6136, 6184, 3816, 4312, 88, 2592, 96, 0, 32, 104},
	//offsets for: /mysqlrpm/5.6.15/usr/sbin/mysqld (5.6.15)
	{"5.6.15","dbd2d20241e4e59412b5d2bff97513da", 7920, 7968, 3984, 4504, 72, 2704, 96, 0, 32, 104},
	//offsets for: /mysql/5.1.73/bin/mysqld (5.1.73)
	{"5.1.73","c84e4519e1ada16c245a87170bf1c3f0", 6400, 6464, 3752, 4024, 88, 2072, 8, 0, 24, 16},
	//offsets for: /mysqlrpm/5.5.36/usr/sbin/mysqld (5.5.36)
	{"5.5.36","c88f67a152a2f9d74b8fd3ef182418be", 6136, 6184, 3816, 4312, 88, 2592, 96, 0, 32, 104},
	//offsets for: /mysqlrpm/5.6.16/usr/sbin/mysqld (5.6.16)
	{"5.6.16","5f5ef8d06a3ead4f0bfa2e43edc69898", 7920, 7968, 3984, 4504, 72, 2704, 96, 0, 32, 104},
	//offsets for: /mysql/5.5.36/bin/mysqld (5.5.36)
	{"5.5.36","f5595334dd163428d54a546b11b8e205", 6136, 6184, 3816, 4312, 88, 2592, 96, 0, 32, 104},
	//offsets for: /mysql/5.6.16/bin/mysqld (5.6.16)
	{"5.6.16","b50b5c83341099b9cd6f6749dfd71bca", 7920, 7968, 3984, 4504, 72, 2704, 96, 0, 32, 104},
	//offsets for: /mysqlrpm/5.6.17/usr/sbin/mysqld (5.6.17)
	{"5.6.17","972845b7f80376956fc1db46ec88f72e", 7928, 7976, 3992, 4512, 72, 2704, 96, 0, 32, 104},
	//offsets for: /mysql/5.6.17/bin/mysqld (5.6.17)
	{"5.6.17","525a28e1f7b05b2b03111f5f521b428d", 7928, 7976, 3992, 4512, 72, 2704, 96, 0, 32, 104},
	//offsets for: /mysqlrpm/5.5.37/usr/sbin/mysqld (5.5.37)
	{"5.5.37","1a2d5e421f97381578cf037b69e90200", 6136, 6184, 3816, 4312, 88, 2592, 96, 0, 32, 104}
};

#else
//32 bit offsets
const ThdOffsets thd_offsets_arr[] =
{
	/* +++ MYSQL 32 OFFSETS GO HERE +++ */
	//offsets for: /mysqlrpm/5.5.50/usr/sbin/mysqld (5.5.50)
	{"5.5.50","2adacdba4c475e574dedbf97366159c7", 3872, 3900, 2368, 2748, 44, 1656, 60, 0, 20, 64, 60, 3956},
	//offsets for: /mysqlrpm/5.6.31/usr/sbin/mysqld (5.6.31)
	{"5.6.31","76ac1bf29aa851809fb2943e8534023f", 4676, 4704, 2660, 3052, 36, 1748, 60, 0, 20, 64, 72, 4776},
	//offsets for: /mysqlrpm/5.7.13/usr/sbin/mysqld (5.7.13)
	{"5.7.13","21c64452c8a87b2952bb01b3e0abc99a", 5072, 5100, 2208, 3028, 296, 200, 0, 20, 40, 100, 340, 5188},
	//offsets for: /mysqlrpm/5.7.12/usr/sbin/mysqld (5.7.12)
	{"5.7.12","c544b5ccfc52a7e4667e0766fbad0909", 5072, 5100, 2208, 3028, 296, 200, 0, 20, 40, 100, 340, 5188},
	//offsets for: /mysqlrpm/5.5.49/usr/sbin/mysqld (5.5.49)
	{"5.5.49","3fbac9ee400e5ca56e0b328f23c38b54", 3872, 3900, 2368, 2748, 44, 1656, 60, 0, 20, 64, 60, 3956},
	//offsets for: /mysqlrpm/5.6.30/usr/sbin/mysqld (5.6.30)
	{"5.6.30","bcf06179a987910bff85ee0482f8391f", 4676, 4704, 2660, 3052, 36, 1748, 60, 0, 20, 64, 72, 4776},
	//offsets for: /mysqlrpm/5.5.48/usr/sbin/mysqld (5.5.48)
	{"5.5.48","731f6399029830b0b9ffa151541ed474", 3872, 3900, 2368, 2748, 44, 1656, 60, 0, 20, 64, 60, 3956},
	//offsets for: /mysqlrpm/5.6.29/usr/sbin/mysqld (5.6.29)
	{"5.6.29","c1e32ee3937f2ad5fc9df94d1e0aa649", 4676, 4704, 2660, 3052, 36, 1748, 60, 0, 20, 64, 72, 4776},
	//offsets for: /mysqlrpm/5.7.11/usr/sbin/mysqld (5.7.11)
	{"5.7.11","014a96aac6006bf942dd2047aad0ccd1", 5064, 5092, 2200, 3020, 296, 200, 0, 20, 40, 100, 340, 5180},
	//offsets for: /mysqlrpm/5.7.10/usr/sbin/mysqld (5.7.10)
	{"5.7.10","e6389a154b82cfaac4a89f1b2a995365", 5060, 5088, 2196, 3016, 296, 200, 0, 20, 40, 100, 340, 5172},
	//offsets for: /mysqlrpm/5.7.9/usr/sbin/mysqld (5.7.9)
	{"5.7.9","95a6843300e1fef377d298210a4e2525", 5060, 5088, 2196, 3016, 296, 200, 0, 20, 40, 100, 340, 5172},
	//offsets for: /mysqlrpm/5.5.47/usr/sbin/mysqld (5.5.47)
	{"5.5.47","669f76493658cd2758af28a1c391391a", 3872, 3900, 2368, 2748, 44, 1656, 60, 0, 20, 64, 60, 3956},
	//offsets for: /mysqlrpm/5.6.28/usr/sbin/mysqld (5.6.28)
	{"5.6.28","b108d8002c70f9e6bf57b6c47f1b4a74", 4676, 4704, 2660, 3052, 36, 1748, 60, 0, 20, 64, 72, 4776},
	//offsets for: /mysqlrpm/5.6.27/usr/sbin/mysqld (5.6.27)
	{"5.6.27","66d0b372d6eb134730c43bdb1c2ac4e5", 4672, 4700, 2660, 3052, 36, 1748, 60, 0, 20, 64, 72, 4772},
	//offsets for: /mysqlrpm/5.5.46/usr/sbin/mysqld (5.5.46)
	{"5.5.46","ad19ca91985eaafe185c0a3f4e51fd9a", 3872, 3900, 2368, 2748, 44, 1656, 60, 0, 20, 64, 60, 3956},
	//offsets for: /mysqlrpm/5.5.45/usr/sbin/mysqld (5.5.45)
	{"5.5.45","c91cfb5d8b250a40d626d4fe1bc89fdd", 3872, 3900, 2368, 2748, 44, 1656, 60, 0, 20, 64, 60, 3956},
	//offsets for: /mysqlrpm/5.6.26/usr/sbin/mysqld (5.6.26)
	{"5.6.26","1cb4e5089554ae6b92569955980b95aa", 4672, 4700, 2660, 3052, 36, 1748, 60, 0, 20, 64, 72, 4772},
	//offsets for: /mysqlrpm/5.5.44/usr/sbin/mysqld (5.5.44)
	{"5.5.44","e69b8c103a28a09dbe6aedd1b3b433f8", 3872, 3900, 2368, 2748, 44, 1656, 60, 0, 20, 64, 60, 3956},
	//offsets for: /mysqlrpm/5.6.25/usr/sbin/mysqld (5.6.25)
	{"5.6.25","2e90f40fd72446f7c68e662ab4b51ee9", 4672, 4700, 2660, 3052, 36, 1748, 60, 0, 20, 64, 72, 4772},
	//offsets for: /mysqlrpm/5.5.43/usr/sbin/mysqld (5.5.43)
	{"5.5.43","5bb9944b00a46765a12e6a3a261e10fa", 3868, 3896, 2368, 2748, 44, 1656, 60, 0, 20, 64, 60, 3952},
	//offsets for: /mysqlrpm/5.6.24/usr/sbin/mysqld (5.6.24)
	{"5.6.24","55aab9806d2b88fe1fe0ab66dd2017eb", 4668, 4696, 2660, 3052, 36, 1748, 60, 0, 20, 64, 72, 4768},
	//offsets for: /mysqlrpm/5.5.42/usr/sbin/mysqld (5.5.42)
	{"5.5.42","e0e62892aeb511bcfe92fcd95bf90fcb", 3868, 3896, 2368, 2748, 44, 1656, 60, 0, 20, 64, 60, 3952},
	//offsets for: /mysqlrpm/5.6.23/usr/sbin/mysqld (5.6.23)
	{"5.6.23","727e1bd34328073ec9cdfd2d564fd5ce", 5652, 5680, 2656, 3048, 36, 1748, 60, 0, 20, 64, 72, 5752},
	//offsets for: /mysqlrpm/5.5.41/usr/sbin/mysqld (5.5.41)
	{"5.5.41","b234951450a025962337644f8895420a", 3868, 3896, 2368, 2748, 44, 1656, 60, 0, 20, 64},
	//offsets for: /mysqlrpm/5.6.22/usr/sbin/mysqld (5.6.22)
	{"5.6.22","5835e81c4b1e6b26dc91ab7734791a63", 5652, 5680, 2656, 3048, 36, 1748, 60, 0, 20, 64},
	//offsets for: /mysqlrpm/5.5.40/usr/sbin/mysqld (5.5.40)
	{"5.5.40","a1549dfa57facd1bc63ba130d359c206", 3868, 3896, 2368, 2748, 44, 1656, 60, 0, 20, 64},
	//offsets for: /mysqlrpm/5.6.21/usr/sbin/mysqld (5.6.21)
	{"5.6.21","87425fea7e02c944eb0f0a674b7c0058", 5652, 5680, 2656, 3048, 36, 1748, 60, 0, 20, 64},
	//offsets for: /mysqlrpm/5.5.39/usr/sbin/mysqld (5.5.39)
	{"5.5.39","0a43c59be487d93a14322628464a5b1f", 3868, 3896, 2368, 2748, 44, 1656, 60, 0, 20, 64},
	//offsets for: /mysqlrpm/5.6.20/usr/sbin/mysqld (5.6.20)
	{"5.6.20","a6d6d22e1bbd79c704a4809188fe1773", 5652, 5680, 2656, 3048, 36, 1748, 60, 0, 20, 64},
	//offsets for: /mysqlrpm/5.5.38/usr/sbin/mysqld (5.5.38)
	{"5.5.38","89e8b85dd5731e15df3d5597020c0ec8", 3868, 3896, 2368, 2748, 44, 1656, 60, 0, 20, 64},
	//offsets for: /mysqlrpm/5.6.19/usr/sbin/mysqld (5.6.19)
	{"5.6.19","3f94430e20b564951159aa78627df97f", 5652, 5680, 2656, 3048, 36, 1748, 60, 0, 20, 64},
	//offsets for: mysqlrpm/5.1.30/usr/sbin/mysqld (5.1.30-community)
	{"5.1.30-community","fdfe108d05c262c185a7c28b2e493c10", 4024, 4064, 2224, 2404, 44, 1180},
	//offsets for: mysqlrpm/5.1.31/usr/sbin/mysqld (5.1.31-community)
	{"5.1.31-community","79e595a948564164886471fce7b90414", 4028, 4068, 2228, 2408, 44, 1172},
	//offsets for: mysqlrpm/5.1.32/usr/sbin/mysqld (5.1.32-community)
	{"5.1.32-community","08bbc180f9aed54f3b8fb596360766cd", 4028, 4068, 2228, 2408, 44, 1172},
	//offsets for: mysqlrpm/5.1.33/usr/sbin/mysqld (5.1.33-community)
	{"5.1.33-community","c9c3d4de320bbf721a13b0f2d7469a0d", 4032, 4072, 2228, 2408, 44, 1176},
	//offsets for: mysqlrpm/5.1.34/usr/sbin/mysqld (5.1.34-community)
	{"5.1.34-community","806598500d6b9264dcd78eb6f0ed037b", 4036, 4076, 2232, 2412, 44, 1176},
	//offsets for: mysqlrpm/5.1.35/usr/sbin/mysqld (5.1.35-community)
	{"5.1.35-community","b4202f285a39dc8875fb718e1310c2cd", 4036, 4076, 2232, 2412, 44, 1176},
	//offsets for: mysqlrpm/5.1.36/usr/sbin/mysqld (5.1.36-community)
	{"5.1.36-community","76dd39a6a4bd61313745b984c186caa2", 4036, 4076, 2232, 2412, 44, 1176},
	//offsets for: mysqlrpm/5.1.37/usr/sbin/mysqld (5.1.37-community)
	{"5.1.37-community","615173a7021b143a65c31d0e58d01172", 4036, 4076, 2232, 2412, 44, 1176},
	//offsets for: mysqlrpm/5.1.38/usr/sbin/mysqld (5.1.38-community)
	{"5.1.38-community","f818189713bb56ccce507a4db4fcbfed", 4036, 4076, 2232, 2412, 44, 1176},
	//offsets for: mysqlrpm/5.1.39/usr/sbin/mysqld (5.1.39-community)
	{"5.1.39-community","9951b3c9c050a9a5e0a2994295e0aa0c", 4036, 4076, 2232, 2412, 44, 1176},
	//offsets for: mysqlrpm/5.1.40/usr/sbin/mysqld (5.1.40-community)
	{"5.1.40-community","3f44d47492e746e57883fb44e7f92195", 4036, 4076, 2232, 2412, 44, 1176},
	//offsets for: mysqlrpm/5.1.41/usr/sbin/mysqld (5.1.41-community)
	{"5.1.41-community","b03f583f769bf2638170a157835baffb", 4036, 4076, 2232, 2412, 44, 1176},
	//offsets for: mysqlrpm/5.1.42/usr/sbin/mysqld (5.1.42-community)
	{"5.1.42-community","ec01163698da7c64e9267e2e4b87133d", 4036, 4076, 2232, 2412, 44, 1176},
	//offsets for: mysqlrpm/5.1.43/usr/sbin/mysqld (5.1.43-community)
	{"5.1.43-community","dc93f6b2f35e4b7c6814dc39e6bdf7f4", 4036, 4076, 2232, 2412, 44, 1176},
	//offsets for: mysqlrpm/5.1.44/usr/sbin/mysqld (5.1.44-community)
	{"5.1.44-community","cd6f166239d377423533400bf7b00ea3", 4040, 4080, 2236, 2416, 44, 1176},
	//offsets for: mysqlrpm/5.1.45/usr/sbin/mysqld (5.1.45-community)
	{"5.1.45-community","8dcfe0e4adfad351d33f0939442480f6", 4040, 4080, 2236, 2416, 44, 1176},
	//offsets for: mysqlrpm/5.1.46/usr/sbin/mysqld (5.1.46-community)
	{"5.1.46-community","5e2689bea4fbccceed1e32cd96cc3c34", 4040, 4080, 2236, 2416, 44, 1176},
	//offsets for: mysqlrpm/5.1.47/usr/sbin/mysqld (5.1.47-community)
	{"5.1.47-community","d24830298658630ff57c28e886f7867a", 4104, 4144, 2240, 2420, 44, 1176},
	//offsets for: mysqlrpm/5.1.48/usr/sbin/mysqld (5.1.48-community)
	{"5.1.48-community","0fb5da11cb2af69c9c8ccb4e7e09c2ba", 4104, 4144, 2240, 2420, 44, 1176},
	//offsets for: mysqlrpm/5.1.49/usr/sbin/mysqld (5.1.49-community)
	{"5.1.49-community","44c5f411e0ca0251afed127c2eab099a", 4104, 4144, 2240, 2420, 44, 1176},
	//offsets for: mysqlrpm/5.1.50/usr/sbin/mysqld (5.1.50-community)
	{"5.1.50-community","ba318e3ea6c628e771c061bc8f8fd747", 4104, 4144, 2240, 2420, 44, 1176},
	//offsets for: mysqlrpm/5.1.51/usr/sbin/mysqld (5.1.51-community)
	{"5.1.51-community","9e3294ed95b2f1197466f3b4100074b4", 4104, 4144, 2240, 2420, 44, 1176},
	//offsets for: mysqlrpm/5.1.52/usr/sbin/mysqld (5.1.52-community)
	{"5.1.52-community","6bef5cbe540f8a5d445b9ae243a0d228", 4104, 4144, 2240, 2420, 44, 1176},
	//offsets for: mysqlrpm/5.1.53/usr/sbin/mysqld (5.1.53-community)
	{"5.1.53-community","cd34abf1b7cc20928a30b23c9270bae9", 4104, 4144, 2240, 2420, 44, 1176},
	//offsets for: mysqlrpm/5.1.54/usr/sbin/mysqld (5.1.54-community)
	{"5.1.54-community","af4e3ed1f31aba894714bb9dd572b920", 4104, 4144, 2240, 2420, 44, 1176},
	//offsets for: mysqlrpm/5.1.55/usr/sbin/mysqld (5.1.55-community)
	{"5.1.55-community","3b201091f1f87ec89c0f69b5e5712cd5", 4104, 4144, 2240, 2420, 44, 1176},
	//offsets for: mysqlrpm/5.1.56/usr/sbin/mysqld (5.1.56-community)
	{"5.1.56-community","43fb22017f5fb7ba436dbf53fe45ac5d", 4104, 4144, 2240, 2420, 44, 1176},
	//offsets for: mysqlrpm/5.1.57/usr/sbin/mysqld (5.1.57-community)
	{"5.1.57-community","b3b137aaa9550b070185e7fb1b788a97", 4104, 4144, 2240, 2420, 44, 1176},
	//offsets for: mysqlrpm/5.1.58/usr/sbin/mysqld (5.1.58-community)
	{"5.1.58-community","728f80ea4a231f85b2dc8661bf6828fc", 4104, 4144, 2240, 2420, 44, 1176},
	{"5.1.58-community","a4199c1595d0ef3f0b1a2ffbc4e74976", 4104, 4144, 2240, 2420, 44, 1176},
	{"5.1.58-community","5d9be93190a88860d0d4f4033c2d3d09", 4104, 4144, 2240, 2420, 44, 1176},
	{"5.1.58-community","5b7a9bca308184339999f42db6224467", 4104, 4144, 2240, 2420, 44, 1176},
	//offsets for: /mysqlrpm/5.1.59/usr/sbin/mysqld (5.1.59-community)
	{"5.1.59-community","2405f0bf32c0a1439a157e54431443de", 4096, 4136, 2240, 2420, 44, 1176},
	//offsets for: /mysqlrpm/5.1.60/usr/sbin/mysqld (5.1.60-community)
	{"5.1.60-community","bc2d74ea58d22d998f8f8c88139fc5f7", 4096, 4136, 2240, 2420, 44, 1176},
	//offsets for: /mysqlrpm/5.1.61/usr/sbin/mysqld (5.1.61-community)
	{"5.1.61-community","f73013eb2001a02c84ddd0ac42a307ac", 4096, 4136, 2240, 2420, 44, 1176},
	//offsets for: /mysqlrpm/5.1.62/usr/sbin/mysqld (5.1.62-community)
	{"5.1.62-community","f410638e7414c6cc709b7d5cda24669c", 4096, 4136, 2240, 2420, 44, 1176},
	//offsets for: /mysqlrpm/5.1.63/usr/sbin/mysqld (5.1.63-community)
	{"5.1.63-community","2b39264a67466c6f1dfa37c37a8a6bd0", 4096, 4136, 2240, 2420, 44, 1176},
	//offsets for: /mysqlrpm/5.1.65/usr/sbin/mysqld (5.1.65-community)
	{"5.1.65-community","0e96922fe95be696f7f91fc5a94c5d46", 4124, 4164, 2268, 2448, 44, 1180},
	//offsets for: /mysqlrpm/5.1.66/usr/sbin/mysqld (5.1.66-community)
	{"5.1.66-community","60049b5c82e3479323001ffb28447820", 4124, 4164, 2268, 2448, 44, 1180},
	//offsets for: /mysqlrpm/5.1.67/usr/sbin/mysqld (5.1.67-community)
	{"5.1.67-community","2ca1d344c7054644a7e98c34b11bee64", 4124, 4164, 2268, 2448, 44, 1180},
	//offsets for: /mysqlrpm/5.1.68/usr/sbin/mysqld (5.1.68-community)
	{"5.1.68-community","df5dc268b36dbe853ed37d91fd4b6b3f", 4124, 4164, 2268, 2448, 44, 1180},
	//offsets for: /mysqlrpm/5.1.69/usr/sbin/mysqld (5.1.69-community)
	{"5.1.69-community","4c8acbca31f3f4ba44d35db9f5c65bc0", 4124, 4164, 2268, 2448, 44, 1180},
	//offsets for: mysqlrpm/5.5.8/usr/sbin/mysqld (5.5.8)
	{"5.5.8","3132e8c883f72caf4c8eddb24fd005b4", 3792, 3820, 2336, 2668, 44, 1640},
	//offsets for: mysqlrpm/5.5.9/usr/sbin/mysqld (5.5.9)
	{"5.5.9","1f9f8f5109687db75c15bc04d4396842", 3816, 3844, 2360, 2692, 44, 1640},
	//offsets for: mysqlrpm/5.5.10/usr/sbin/mysqld (5.5.10)
	{"5.5.10","f9e6ef8075fe370842c0fce571eac6e1", 3816, 3844, 2360, 2692, 44, 1640},
	//offsets for: mysqlrpm/5.5.11/usr/sbin/mysqld (5.5.11)
	{"5.5.11","37c160fac1cc844fc4aa09bb23a60022", 3812, 3840, 2356, 2688, 44, 1640},
	//offsets for: mysqlrpm/5.5.12/usr/sbin/mysqld (5.5.12)
	{"5.5.12","565093ea45815edd8fa8bd444825aa6d", 3812, 3840, 2356, 2688, 44, 1640},
	//offsets for: mysqlrpm/5.5.13/usr/sbin/mysqld (5.5.13)
	{"5.5.13","0592c10129e360623a70bbcc1618c7ad", 3812, 3840, 2356, 2688, 44, 1640},
	//offsets for: mysqlrpm/5.5.14/usr/sbin/mysqld (5.5.14)
	{"5.5.14","53eca2f96ec9185c1b733c2b254fa416", 3812, 3840, 2356, 2688, 44, 1640},
	//offsets for: mysqlrpm/5.5.15/usr/sbin/mysqld (5.5.15)
	{"5.5.15","01fa6e9c9eafb638c801cc3d261dca70", 3812, 3840, 2356, 2688, 44, 1640},
	//offsets for: mysqlrpm/5.5.16/usr/sbin/mysqld (5.5.16)
	{"5.5.16","0959bb8b5a0fa940c900873ff743bd59", 3804, 3832, 2356, 2688, 44, 1640},
	//offsets for: mysqlrpm/5.5.17/usr/sbin/mysqld (5.5.17)
	{"5.5.17","c99b809e13c52ac0e173baff0df24f75", 3804, 3832, 2356, 2688, 44, 1640},
	//offsets for: mysqlrpm/5.5.18/usr/sbin/mysqld (5.5.18)
	{"5.5.18","bbeb7e7ad983ea1db87665d8e530f6b6", 3804, 3832, 2356, 2688, 44, 1640},
	//offsets for: mysqlrpm/5.5.19/usr/sbin/mysqld (5.5.19)
	{"5.5.19","f3c31e2a5d95d3511b7106441f38929e", 3808, 3836, 2360, 2692, 44, 1640},
	//offsets for: /mysqlrpm/5.5.20/usr/sbin/mysqld (5.5.20)
	{"5.5.20","c73100bcb0d967b627cad72e66503194", 3808, 3836, 2360, 2692, 44, 1640},
	//offsets for: mysqlrpm/5.5.21/usr/sbin/mysqld (5.5.21)
	{"5.5.21","18d78ced97227b83e62e9b43ba5b3883", 3808, 3836, 2360, 2692, 44, 1640},
	//offsets for: /mysqlrpm/5.5.22/usr/sbin/mysqld (5.5.22)
	{"5.5.22","9da3081f83069a2762831d0ead5a97c8", 3808, 3836, 2360, 2692, 44, 1640},
	//offsets for: /mysqlrpm/5.5.23/usr/sbin/mysqld (5.5.23)
	{"5.5.23","c94f20f31cfa674d5763da7d2344c219", 3808, 3836, 2360, 2692, 44, 1644},
	//offsets for: /mysqlrpm/5.5.24/usr/sbin/mysqld (5.5.24)
	{"5.5.24","10e0ced8d28daf6a9c16d2b57be7c6af", 3808, 3836, 2360, 2692, 44, 1644},
	//offsets for: /mysqlrpm/5.5.25/usr/sbin/mysqld (5.5.25)
	{"5.5.25","bd20af37978967a145724098e913eeda", 3812, 3840, 2364, 2696, 44, 1644},
	//offsets for: /mysqlrpm/5.5.27/usr/sbin/mysqld (5.5.27)
	{"5.5.27","e6a9760303ea8fdd4face5a88d925059", 3812, 3840, 2364, 2696, 44, 1644},
	//offsets for: /mysqlrpm/5.5.28/usr/sbin/mysqld (5.5.28)
	{"5.5.28","8f435a5b9308fd2c4d20860fb3b38ec7", 3812, 3840, 2364, 2696, 44, 1644},
	//offsets for: /mysqlrpm/5.5.29/usr/sbin/mysqld (5.5.29)
	{"5.5.29","89c4df6dcf941ccded0c08c73d976877", 3812, 3840, 2364, 2696, 44, 1644},
	//offsets for: /mysqlrpm/5.5.30/usr/sbin/mysqld (5.5.30)
	{"5.5.30","0186d1ef4725814924bfe968e3455138", 3816, 3844, 2368, 2700, 44, 1644},
	//offsets for: /mysqlrpm/5.5.31/usr/sbin/mysqld (5.5.31)
	{"5.5.31","190e7556e226f8690ba8672869178e4c", 3816, 3844, 2368, 2700, 44, 1644},
	//offsets for: /mysqlrpm/5.6.10/usr/sbin/mysqld (5.6.10)
	{"5.6.10","dd3abddcfd0015de81b6a26b6190cefb", 5572, 5600, 2640, 2980, 36, 1712},
	//offsets for: /mysqlrpm/5.6.11/usr/sbin/mysqld (5.6.11)
	{"5.6.11","0f716b88d1c11c031dbb206a3e1b31a4", 5572, 5600, 2640, 2980, 36, 1724},

	//DISTRIBUTION: tar.gz
	//offsets for: mysql/5.1.30/bin/mysqld (5.1.30)
	{"5.1.30","f02d15a37e8e7513e7570023b48ccb4d", 4028, 4068, 2228, 2408, 44, 1180},
	//offsets for: mysql/5.1.31/bin/mysqld (5.1.31)
	{"5.1.31","a3a240c57429f67c4fcb5c960d30f5cc", 4036, 4076, 2236, 2416, 44, 1172},
	//offsets for: mysql/5.1.32/bin/mysqld (5.1.32)
	{"5.1.32","b8d4491363c8b4e4fb61fce807cb849c", 4036, 4076, 2236, 2416, 44, 1172},
	//offsets for: mysql/5.1.33/bin/mysqld (5.1.33)
	{"5.1.33","1b8c93710fe908565cf434b8a4a472c6", 4040, 4080, 2236, 2416, 44, 1176},
	//offsets for: mysql/5.1.34/bin/mysqld (5.1.34)
	{"5.1.34","dcbd60d1c75bcb75b75bf0428b64bcfa", 4044, 4084, 2240, 2420, 44, 1176},
	//offsets for: mysql/5.1.35/bin/mysqld (5.1.35)
	{"5.1.35","ffd1fa84e00daace393e5450298fcbeb", 4044, 4084, 2240, 2420, 44, 1176},
	//offsets for: mysql/5.1.36/bin/mysqld (5.1.36)
	{"5.1.36","3a45ab0b7d8bcac42933b8635b7898ef", 4044, 4084, 2240, 2420, 44, 1176},
	//offsets for: mysql/5.1.37/bin/mysqld (5.1.37)
	{"5.1.37","fb51c158439a1a2524048822f803b900", 4044, 4084, 2240, 2420, 44, 1176},
	//offsets for: mysql/5.1.38/bin/mysqld (5.1.38)
	{"5.1.38","3325969a0feffd660968ff489d59e648", 4044, 4084, 2240, 2420, 44, 1176},
	//offsets for: mysql/5.1.39/bin/mysqld (5.1.39)
	{"5.1.39","e3c3f1ab7d6f11d4db161f76e01ae229", 4044, 4084, 2240, 2420, 44, 1176},
	//offsets for: mysql/5.1.40/bin/mysqld (5.1.40)
	{"5.1.40","f068b9eef84e76556e90889148011911", 4044, 4084, 2240, 2420, 44, 1176},
	//offsets for: mysql/5.1.41/bin/mysqld (5.1.41)
	{"5.1.41","dcfa2d28d2bb193d8883bf0f465582db", 4044, 4084, 2240, 2420, 44, 1176},
	//offsets for: mysql/5.1.42/bin/mysqld (5.1.42)
	{"5.1.42","f384b97929c2cef7cfe292cc2d1ed018", 4044, 4084, 2240, 2420, 44, 1176},
	//offsets for: mysql/5.1.43/bin/mysqld (5.1.43)
	{"5.1.43","10035c4e3877da190d6f2b00c3f28eea", 4044, 4084, 2240, 2420, 44, 1176},
	//offsets for: mysql/5.1.44/bin/mysqld (5.1.44)
	{"5.1.44","5119573ff0a4ad1688a5ac6412b5b51a", 4048, 4088, 2244, 2424, 44, 1176},
	//offsets for: mysql/5.1.45/bin/mysqld (5.1.45)
	{"5.1.45","8a57e78f7b0bf6818ba032c05a4b5c6b", 4048, 4088, 2244, 2424, 44, 1176},
	//offsets for: mysql/5.1.46/bin/mysqld (5.1.46)
	{"5.1.46","090c3c45fbe7a37fa83b1567604d9598", 4048, 4088, 2244, 2424, 44, 1176},
	//offsets for: mysql/5.1.47/bin/mysqld (5.1.47)
	{"5.1.47","1864a85030c04e85dc9c9c37db449e11", 4112, 4152, 2248, 2428, 44, 1176},
	//offsets for: mysql/5.1.48/bin/mysqld (5.1.48)
	{"5.1.48","73a8915a1549012fcfeefe285f9dda3b", 4112, 4152, 2248, 2428, 44, 1176},
	//offsets for: mysql/5.1.49/bin/mysqld (5.1.49)
	{"5.1.49","cc318106e6d7670c2e0d787c61c64e3e", 4112, 4152, 2248, 2428, 44, 1176},
	//offsets for: mysql/5.1.50/bin/mysqld (5.1.50)
	{"5.1.50","d651dd6ba898bb6fe4b94a820f6bc670", 4112, 4152, 2248, 2428, 44, 1176},
	//offsets for: mysql/5.1.51/bin/mysqld (5.1.51)
	{"5.1.51","bc5b02298ab8f928c57055a1ddf9f9eb", 4112, 4152, 2248, 2428, 44, 1176},
	//offsets for: mysql/5.1.52/bin/mysqld (5.1.52)
	{"5.1.52","1553d70d4a1e50cbc3372cfc19c781d1", 4112, 4152, 2248, 2428, 44, 1176},
	//offsets for: mysql/5.1.53/bin/mysqld (5.1.53)
	{"5.1.53","c9e447344659169b6a94c24b30872539", 4112, 4152, 2248, 2428, 44, 1176},
	//offsets for: mysql/5.1.54/bin/mysqld (5.1.54)
	{"5.1.54","bf71b8a6a3ba8d1dccae9173d1b24f1c", 4112, 4152, 2248, 2428, 44, 1176},
	//offsets for: mysql/5.1.55/bin/mysqld (5.1.55)
	{"5.1.55","9fad028c88f5236d6d573b49d228cfbd", 4112, 4152, 2248, 2428, 44, 1176},
	//offsets for: mysql/5.1.56/bin/mysqld (5.1.56)
	{"5.1.56","01ed5d208a836a81770a9b4cf7e3c950", 4112, 4152, 2248, 2428, 44, 1176},
	//offsets for: mysql/5.1.57/bin/mysqld (5.1.57)
	{"5.1.57","e180e87ea25ddf3834a6f397e56e6df6", 4112, 4152, 2248, 2428, 44, 1176},
	//offsets for: mysql/5.1.58/bin/mysqld (5.1.58)
	{"5.1.58","46795902e2a8a54976e3c4fd81cb567f", 4112, 4152, 2248, 2428, 44, 1176},
	{"5.1.58","3200476a63ce76810171d6791fdfb1fe", 4112, 4152, 2248, 2428, 44, 1176},
	//offsets for: /mysql/5.1.59/bin/mysqld (5.1.59)
	{"5.1.59","3122bfbeea3e4b420be996eb64244fb4", 4104, 4144, 2248, 2428, 44, 1176},
	//offsets for: /mysql/5.1.60/bin/mysqld (5.1.60)
	{"5.1.60","520270041d8c490d49233e88741c025c", 4104, 4144, 2248, 2428, 44, 1176},
	//offsets for: /mysql/5.1.61/bin/mysqld (5.1.61)
	{"5.1.61","1a7a0981d77f4d212e899efaa581bd42", 4104, 4144, 2248, 2428, 44, 1176},
	//offsets for: /mysql/5.1.62/bin/mysqld (5.1.62)
	{"5.1.62","4c5fd81faa9fe407c8a7fbd11b29351a", 4104, 4144, 2248, 2428, 44, 1176},
	//offsets for: /mysql/5.1.63/bin/mysqld (5.1.63)
	{"5.1.63","576124febe6310985e432f6346031ff4", 4104, 4144, 2248, 2428, 44, 1176},
	//offsets for: /mysql/5.1.65/bin/mysqld (5.1.65)
	{"5.1.65","96c750de824898f8af435bd7b73a5e88", 4140, 4180, 2284, 2464, 44, 1180},
	//offsets for: /mysql/5.1.66/bin/mysqld (5.1.66)
	{"5.1.66","db5aea9077c989e079980960405807bc", 4140, 4180, 2284, 2464, 44, 1180},
	//offsets for: /mysql/5.1.67/bin/mysqld (5.1.67)
	{"5.1.67","9f2609f5925abe6f3c01a05a53569b35", 4140, 4180, 2284, 2464, 44, 1180},
	//offsets for: /mysql/5.1.68/bin/mysqld (5.1.68)
	{"5.1.68","d03c42d8a8946f11ace86a5e1189114d", 4140, 4180, 2284, 2464, 44, 1180},
	//offsets for: /mysql/5.1.69/bin/mysqld (5.1.69)
	{"5.1.69","5abf5a9f9f9c01be997595b066a40986", 4140, 4180, 2284, 2464, 44, 1180},
	//offsets for: /mysqlrpm/5.5.8/usr/sbin/mysqld (5.5.8)
	{"5.5.8","3132e8c883f72caf4c8eddb24fd005b4", 3792, 3820, 2336, 2668, 44, 1640},
	{"5.5.8","ad8a16d9bbfb783dab53f38cef757900", 3792, 3820, 2336, 2668, 44, 1640},
	//offsets for: /mysql/5.5.8/bin/mysqld (5.5.8)
	{"5.5.8","9fad75a10170625712be354ec5b52f2d", 3792, 3820, 2336, 2668, 44, 1640},
	//offsets for: /mysql/5.5.9/bin/mysqld (5.5.9)
	{"5.5.9","6ff8ac441ea0e5ff90dc95a47443ea8c", 3816, 3844, 2360, 2692, 44, 1640},
	//offsets for: /mysql/5.5.10/bin/mysqld (5.5.10)
	{"5.5.10","f27715ede95269b83527338739184f49", 3816, 3844, 2360, 2692, 44, 1640},
	//offsets for: /mysql/5.5.11/bin/mysqld (5.5.11)
	{"5.5.11","896bf69c3b42fb77e9efdd5fd3661800", 3812, 3840, 2356, 2688, 44, 1640},
	//offsets for: /mysql/5.5.12/bin/mysqld (5.5.12)
	{"5.5.12","c95e1181fadd0a04fe2c7a153058b6f3", 3812, 3840, 2356, 2688, 44, 1640},
	//offsets for: /mysql/5.5.13/bin/mysqld (5.5.13)
	{"5.5.13","d22b9d5bccd9f8bdb3158a87edd0992e", 3812, 3840, 2356, 2688, 44, 1640},
	//offsets for: /mysql/5.5.14/bin/mysqld (5.5.14)
	{"5.5.14","e77fa342d52bd3a7cbd551b8a9649e40", 3812, 3840, 2356, 2688, 44, 1640},
	//offsets for: /mysql/5.5.15/bin/mysqld (5.5.15)
	{"5.5.15","f070920da92c8fdf920f516bfbf7cbb4", 3812, 3840, 2356, 2688, 44, 1640},
	//offsets for: /mysql/5.5.16/bin/mysqld (5.5.16)
	{"5.5.16","291c0f871da9691a2271d48e79d7cf2b", 3804, 3832, 2356, 2688, 44, 1640},
	//offsets for: /mysql/5.5.17/bin/mysqld (5.5.17)
	{"5.5.17","64fde4494dbdd3e05457df5ac93c7760", 3804, 3832, 2356, 2688, 44, 1640},
	//offsets for: /mysql/5.5.18/bin/mysqld (5.5.18)
	{"5.5.18","5f6f2516ff4728f3b04613ed66233aa5", 3804, 3832, 2356, 2688, 44, 1640},
	//offsets for: /mysql/5.5.19/bin/mysqld (5.5.19)
	{"5.5.19","b407d678b9b855bfd29ba3c9f014d4b0", 3808, 3836, 2360, 2692, 44, 1640},
	//offsets for: /mysql/5.5.20/bin/mysqld (5.5.20)
	{"5.5.20","cb9b6887ea525fe9965121d357163fe4", 3808, 3836, 2360, 2692, 44, 1640},
	//offsets for: mysql/5.5.21/bin/mysqld (5.5.21)
	{"5.5.21","a0762cee3ad5d4e77480956144900213", 3808, 3836, 2360, 2692, 44, 1640},
	//offsets for: /mysql/5.5.22/bin/mysqld (5.5.22)
	{"5.5.22","f635047c7ddf74dcac98612a65e40fe1", 3808, 3836, 2360, 2692, 44, 1640},
	//offsets for: /mysql-5.5_5.5.22-0ubuntu1_i386/bin/mysqld (5.5.22-0ubuntu1)
	{"5.5.22-0ubuntu1","9cc7d4582b1fae0ebf43dbe5ffb56008", 3784, 3812, 2336, 2668, 44, 1640},
	//offsets for: /mysql/5.5.23/bin/mysqld (5.5.23)
	{"5.5.23","8f51987d3f0d0dc044adcf42937050f6", 3808, 3836, 2360, 2692, 44, 1644},
	//offsets for: /mysql/5.5.24/bin/mysqld (5.5.24)
	{"5.5.24","a3916dca234905bd49b3fefe5d6ad738", 3808, 3836, 2360, 2692, 44, 1644},
	//offsets for: /mysql/5.5.25/bin/mysqld (5.5.25)
	{"5.5.25","f16c3fa53f77e5f25fd25694b5a27c48", 3812, 3840, 2364, 2696, 44, 1644},
	//offsets for: /mysql/5.5.27/bin/mysqld (5.5.27)
	{"5.5.27","b4d8ccf9348ecfe52fcf1d34b37a394d", 3812, 3840, 2364, 2696, 44, 1644},
	//offsets for: /mysql/5.5.28/bin/mysqld (5.5.28)
	{"5.5.28","f8922e4289a17acf0347e478f6f30705", 3812, 3840, 2364, 2696, 44, 1644},
	//offsets for: /mysql/5.5.29/bin/mysqld (5.5.29)
	{"5.5.29","e94a673a244449de87e6a489a7a08acb", 3812, 3840, 2364, 2696, 44, 1644},
	//offsets for: /mysql/5.5.30/bin/mysqld (5.5.30)
	{"5.5.30","c7b98be45d35b77da6679c354c23d1fa", 3816, 3844, 2368, 2700, 44, 1644},
	//offsets for: /mysql/5.5.31/bin/mysqld (5.5.31)
	{"5.5.31","36631a7c748358598ba21cd4157545d9", 3816, 3844, 2368, 2700, 44, 1644},
	//offsets for: /mysql/5.6.10/bin/mysqld (5.6.10)
	{"5.6.10","84600f18354f519e38302c04fe55ed9c", 5572, 5600, 2640, 2980, 36, 1712},
	//offsets for: /mysql/5.6.11/bin/mysqld (5.6.11)
	{"5.6.11","72e67111f3c1d1c1d4e7095e3a004fcf", 5572, 5600, 2640, 2980, 36, 1724},
	//offsets for: /mysqlrpm/5.1.70/usr/sbin/mysqld (5.1.70-community)
	{"5.1.70-community","605c76c9d37a890cea85c075aeaaa2e6", 4124, 4164, 2268, 2448, 44, 1188},
	//offsets for: /mysqlrpm/5.5.32/usr/sbin/mysqld (5.5.32)
	{"5.5.32","3c00829c6ef3286598079b9f49de9843", 3816, 3844, 2368, 2700, 44, 1656},
	//offsets for: /mysqlrpm/5.6.12/usr/sbin/mysqld (5.6.12)
	{"5.6.12","edaf494ffda685fb4b03b3d9366f6af6", 5580, 5608, 2640, 2980, 36, 1732},
	//offsets for: /mysql/5.1.70/bin/mysqld (5.1.70)
	{"5.1.70","f1c06fde306a5cd5b195425c18c4351b", 4140, 4180, 2284, 2464, 44, 1188},
	//offsets for: /mysql/5.5.32/bin/mysqld (5.5.32)
	{"5.5.32","85199d7a643bf0c336385f613b007018", 3816, 3844, 2368, 2700, 44, 1656},
	//offsets for: /mysql/5.6.12/bin/mysqld (5.6.12)
	{"5.6.12","469ed6bc745eea0d47a69ecf7b3e0d56", 5580, 5608, 2640, 2980, 36, 1732},
	//offsets for: /mysqlrpm/5.1.71/usr/sbin/mysqld (5.1.71-community)
	{"5.1.71-community","2039eb1fb90b85d3744e3628b3ab35fa", 4124, 4164, 2268, 2448, 44, 1188},
	//offsets for: /mysqlrpm/5.5.33/usr/sbin/mysqld (5.5.33)
	{"5.5.33","403fe8f9ecd935890f7ebc73297a08bb", 3816, 3844, 2368, 2700, 44, 1656},
	//offsets for: /mysqlrpm/5.6.13/usr/sbin/mysqld (5.6.13)
	{"5.6.13","8ac0185b8f8a2a066ed0f5cd45597d6b", 5580, 5608, 2640, 2980, 36, 1732},
	//offsets for: /mysql/5.1.71/bin/mysqld (5.1.71)
	{"5.1.71","5e9120167eae0138de4e6f307f337383", 4140, 4180, 2284, 2464, 44, 1188},
	//offsets for: /mysql/5.5.33/bin/mysqld (5.5.33)
	{"5.5.33","3172729c5bf6e81c8d87fe26fe248204", 3816, 3844, 2368, 2700, 44, 1656},
	//offsets for: /mysql/5.6.13/bin/mysqld (5.6.13)
	{"5.6.13","f25a8fabbb1d205f0f2d772d7f41b9da", 5580, 5608, 2640, 2980, 36, 1732},
	//offsets for: /mysqlrpm/5.5.34/usr/sbin/mysqld (5.5.34)
	{"5.5.34","fc8bc7c4edd6c115be5f941ca4618f63", 3868, 3896, 2368, 2748, 44, 1656, 60, 0, 20, 64},
	//offsets for: /mysqlrpm/5.6.14/usr/sbin/mysqld (5.6.14)
	{"5.6.14","d7444b6db9d1a5aceb2162e77de762dc", 5632, 5660, 2640, 3028, 36, 1744, 60, 0, 20, 64},
	//offsets for: /mysqlrpm/5.1.72/usr/sbin/mysqld (5.1.72-community)
	{"5.1.72-community","3f7221660b8c9e953f327da95d250597", 4128, 4168, 2268, 2448, 44, 1188, 4, 0, 12, 8},
	//offsets for: /mysql/5.1.72/bin/mysqld (5.1.72)
	{"5.1.72","199d47e26e5a4cc29399724f47c30aca", 4144, 4184, 2284, 2464, 44, 1188, 4, 0, 12, 8},
	//offsets for: /mysqlrpm/5.1.73/usr/sbin/mysqld (5.1.73-community)
	{"5.1.73-community","3ecceab3ca6a816f5744a9437208e5a3", 4128, 4168, 2268, 2448, 44, 1188, 4, 0, 12, 8},
	//offsets for: /mysqlrpm/5.5.35/usr/sbin/mysqld (5.5.35)
	{"5.5.35","7cd5543273a70209e746b6df7d4b5406", 3868, 3896, 2368, 2748, 44, 1656, 60, 0, 20, 64},
	//offsets for: /mysqlrpm/5.6.15/usr/sbin/mysqld (5.6.15)
	{"5.6.15","59683562fb382b2ab43394517802595e", 5648, 5676, 2652, 3044, 36, 1748, 60, 0, 20, 64},
	//offsets for: /mysql/5.1.73/bin/mysqld (5.1.73)
	{"5.1.73","6a9357091496248e25387f9c2c0c75c4", 4144, 4184, 2284, 2464, 44, 1188, 4, 0, 12, 8},
	//offsets for: /mysqlrpm/5.5.36/usr/sbin/mysqld (5.5.36)
	{"5.5.36","361590c58e15541246b6d3dbc46011da", 3868, 3896, 2368, 2748, 44, 1656, 60, 0, 20, 64},
	//offsets for: /mysqlrpm/5.6.16/usr/sbin/mysqld (5.6.16)
	{"5.6.16","5a570b87913b8d028dfdfca3fc82bd19", 5648, 5676, 2652, 3044, 36, 1748, 60, 0, 20, 64},
	//offsets for: /mysql/5.5.36/bin/mysqld (5.5.36)
	{"5.5.36","22663b7989f3c24619493ac414cbca38", 3868, 3896, 2368, 2748, 44, 1656, 60, 0, 20, 64},
	//offsets for: /mysql/5.6.16/bin/mysqld (5.6.16)
	{"5.6.16","7019959ebb4adaff1047aa4dfb1ff688", 5648, 5676, 2652, 3044, 36, 1748, 60, 0, 20, 64},
	//offsets for: /mysqlrpm/5.6.17/usr/sbin/mysqld (5.6.17)
	{"5.6.17","c2a9a665cb88d59b21d85236c963a814", 5652, 5680, 2656, 3048, 36, 1748, 60, 0, 20, 64},
	//offsets for: /mysql/5.6.17/bin/mysqld (5.6.17)
	{"5.6.17","fc472182fa82c4e6a2e84fa3e6550bc9", 5652, 5680, 2656, 3048, 36, 1748, 60, 0, 20, 64},
	//offsets for: /mysqlrpm/5.5.37/usr/sbin/mysqld (5.5.37)
	{"5.5.37","4f7f6578b33b23ae04aa5c8b13a335dc", 3868, 3896, 2368, 2748, 44, 1656, 60, 0, 20, 64}
};

#endif

#else
//start offsets for MariaDB
#ifdef __x86_64__
//64 bit offsets
const ThdOffsets thd_offsets_arr[] =
{
	/* +++ MARIADB 64 OFFSETS GO HERE +++ */
	//offsets for: /mariadb/10.1.15/bin/mysqld (10.1.15-MariaDB)
	{"10.1.15-MariaDB","688a80985999184d01b4b62371d1aa2f", 13592, 13656, 6368, 7976, 88, 2976, 8, 0, 16, 24, 152, 13748},
	//offsets for: /mariadb/10.0.26/bin/mysqld (10.0.26-MariaDB)
	{"10.0.26-MariaDB","5e48ef1551a2e96cc7b8aeb276776f15", 13432, 13496, 6208, 7816, 88, 2976, 8, 0, 16, 24, 152, 13588},
	//offsets for: /mariadb/5.5.50/bin/mysqld (5.5.50-MariaDB)
	{"5.5.50-MariaDB","219e536c7578133cf8139cc815be678c", 12032, 12096, 5800, 6904, 88, 2920, 8, 0, 16, 24, 152, 12168},
	//offsets for: /mariadb/10.1.14/bin/mysqld (10.1.14-MariaDB)
	{"10.1.14-MariaDB","483111ce9bfdf7ce7c2af3c662a5e754", 13592, 13656, 6368, 7976, 88, 2976, 8, 0, 16, 24, 152, 13748},
	//offsets for: /mariadb/10.0.25/bin/mysqld (10.0.25-MariaDB)
	{"10.0.25-MariaDB","a05add25fa5d28f7805aa4b88aa6f2ae", 13432, 13496, 6208, 7816, 88, 2976, 8, 0, 16, 24, 152, 13588},
	//offsets for: /mariadb/5.5.49/bin/mysqld (5.5.49-MariaDB)
	{"5.5.49-MariaDB","f503f294c510f444c90648b7c0b68e76", 12032, 12096, 5800, 6904, 88, 2920, 8, 0, 16, 24, 152, 12168},
	//offsets for: /mariadb/10.1.13/bin/mysqld (10.1.13-MariaDB)
	{"10.1.13-MariaDB","cd322698dcd46dd82770dc091f1eec51", 13592, 13656, 6368, 7976, 88, 2976, 8, 0, 16, 24, 152, 13748},
	//offsets for: /mariadb/10.1.12/bin/mysqld (10.1.12-MariaDB)
	{"10.1.12-MariaDB","e2ba726e2e6f56976518581da0a2c443", 13592, 13656, 6368, 7976, 88, 2976, 8, 0, 16, 24, 152, 13748},
	//offsets for: /mariadb/10.0.24/bin/mysqld (10.0.24-MariaDB)
	{"10.0.24-MariaDB","f757c1ee447cf82766b7b6d776beadc0", 13432, 13496, 6208, 7816, 88, 2976, 8, 0, 16, 24, 152, 13588},
	//offsets for: /mariadb/5.5.48/bin/mysqld (5.5.48-MariaDB)
	{"5.5.48-MariaDB","fe4ddddc2591703dfdb5f66075ee4751", 12032, 12096, 5800, 6904, 88, 2920, 8, 0, 16, 24, 152, 12168},
	//offsets for: /mariadb/10.1.11/bin/mysqld (10.1.11-MariaDB)
	{"10.1.11-MariaDB","91dc9f2e78433f0efc975174263a4206", 13592, 13656, 6368, 7976, 88, 2976, 8, 0, 16, 24, 152, 13748},
	//offsets for: /mariadb/10.1.10/bin/mysqld (10.1.10-MariaDB)
	{"10.1.10-MariaDB","d6dd898de1ac04fc742bf525f8ce37bf", 13576, 13640, 6352, 7960, 88, 2960, 8, 0, 16, 24, 152, 13732},
	//offsets for: /mariadb/10.0.23/bin/mysqld (10.0.23-MariaDB)
	{"10.0.23-MariaDB","1cc0611b29e35a3a64eba2ff9bc3663c", 13416, 13480, 6192, 7800, 88, 2976, 8, 0, 16, 24, 152, 13572},
	//offsets for: /mariadb/10.0.22/bin/mysqld (10.0.22-MariaDB)
	{"10.0.22-MariaDB","271759a346ed0b973c1b3570eb6e70bc", 13416, 13480, 6192, 7800, 88, 2976, 8, 0, 16, 24, 152, 13572},
	//offsets for: /mariadb/5.5.47/bin/mysqld (5.5.47-MariaDB)
	{"5.5.47-MariaDB","642990798709d79dcdc662104805b44b", 12032, 12096, 5800, 6904, 88, 2920, 8, 0, 16, 24, 152, 12168},
	//offsets for: /mariadb/10.1.9/bin/mysqld (10.1.9-MariaDB)
	{"10.1.9-MariaDB","f6a488fd8331d6201c0598fb6ff3fa9e", 13576, 13640, 6352, 7960, 88, 2960, 8, 0, 16, 24, 152, 13732},
	//offsets for: /mariadb/10.1.8/bin/mysqld (10.1.8-MariaDB)
	{"10.1.8-MariaDB","cf103655e354afa2bf43cc4899b65101", 13576, 13640, 6352, 7960, 88, 2960, 8, 0, 16, 24, 152, 13732},
	//offsets for: /mariadb/5.5.46/bin/mysqld (5.5.46-MariaDB)
	{"5.5.46-MariaDB","ec8c941f31086bed6cf9c7e97ed61c0a", 12032, 12096, 5800, 6904, 88, 2920, 8, 0, 16, 24, 152, 12168},
	//offsets for: /mariadb/10.0.21/bin/mysqld (10.0.21-MariaDB)
	{"10.0.21-MariaDB","e565b3971cc11516822e676465d5b4a9", 13416, 13480, 6192, 7800, 88, 2976, 8, 0, 16, 24, 152, 13572},
	//offsets for: /mariadb/5.5.45/bin/mysqld (5.5.45-MariaDB)
	{"5.5.45-MariaDB","70faaed59f9d41cfea9510dbdaa8cb0d", 12032, 12096, 5800, 6904, 88, 2920, 8, 0, 16, 24, 152, 12168},
	//offsets for: /mariadb/10.0.20/bin/mysqld (10.0.20-MariaDB)
	{"10.0.20-MariaDB","1fd5e15156937feb7f4c5fd1164dd029", 13408, 13472, 6192, 7792, 88, 3000, 8, 0, 16, 24, 152, 13564},
	//offsets for: /mariadb/5.5.44/bin/mysqld (5.5.44-MariaDB)
	{"5.5.44-MariaDB","d4a60362e7a50edca299cfd7d4b6f6b8", 12016, 12080, 5800, 6896, 88, 2944, 8, 0, 16, 24, 152, 12152},
	//offsets for: /mariadb/10.0.19/bin/mysqld (10.0.19-MariaDB)
	{"10.0.19-MariaDB","c0e7e8c4396c7e59a2cbbecdd3c6435e", 13408, 13472, 6192, 7792, 88, 3000, 8, 0, 16, 24, 152, 13564},
	//offsets for: /mariadb/10.0.18/bin/mysqld (10.0.18-MariaDB)
	{"10.0.18-MariaDB","94ad1b6c2323272ec77ce4aca37ef4e3", 13408, 13472, 6192, 7792, 88, 3000, 8, 0, 16, 24, 152, 13564},
	//offsets for: /mariadb/5.5.43/bin/mysqld (5.5.43-MariaDB)
	{"5.5.43-MariaDB","eedfc38ad498ea35e3c6ab4a47ad769e", 12016, 12080, 5800, 6896, 88, 2944, 8, 0, 16, 24, 152, 12152},
	//offsets for: /mariadb/10.0.17/bin/mysqld (10.0.17-MariaDB)
	{"10.0.17-MariaDB","080d431c04b2d0c7dff5ca5c5f760b18", 14368, 14432, 6192, 7792, 88, 3000, 8, 0, 16, 24, 152, 14524},
	//offsets for: /mariadb/5.5.42/bin/mysqld (5.5.42-MariaDB)
	{"5.5.42-MariaDB","04b7fbb6804ca8961fa8b4308a66a7c8", 12016, 12080, 5800, 6896, 88, 2944, 8, 0, 16, 24, 152, 12152},
	//offsets for: /mariadb/10.0.16/bin/mysqld (10.0.16-MariaDB)
	{"10.0.16-MariaDB","c8cc8c9c5e1a1fb33bb2555d27b076a8", 14368, 14432, 6192, 7792, 88, 3000, 8, 0, 16, 24, 152, 14524},
	//offsets for: /mariadb/5.5.41/bin/mysqld (5.5.41-MariaDB)
	{"5.5.41-MariaDB","2073691580d80e2760a7e9d89aa93736", 12016, 12080, 5800, 6896, 88, 2936, 8, 0, 16, 24},
	//offsets for: /mariadb/10.0.15/bin/mysqld (10.0.15-MariaDB)
	{"10.0.15-MariaDB","a7d7f8d53605449629f565baeeb15ef1", 14368, 14432, 6192, 7792, 88, 2992, 8, 0, 16, 24},
	//offsets for: bin/mysqld (10.0.14-MariaDB)
	{"10.0.14-MariaDB","715a7512a2d5e9cf8722f033ac39abc2", 14368, 14432, 6192, 7792, 88, 2992, 8, 0, 16, 24},
	//offsets for: /mariadb/10.0.10/bin/mysqld (10.0.10-MariaDB)
	{"10.0.10-MariaDB","95b0ecd856e2c5012b03ff0ce292cf05", 14368, 14432, 6184, 7784, 88, 2992, 8, 0, 16, 24},
	//offsets for: /mariadb/10.0.11/bin/mysqld (10.0.11-MariaDB)
	{"10.0.11-MariaDB","64eb81f7a969b9351e9a7d5e4fa6161c", 14360, 14424, 6176, 7776, 88, 2992, 8, 0, 16, 24},
	//offsets for: /mariadb/10.0.12/bin/mysqld (10.0.12-MariaDB)
	{"10.0.12-MariaDB","f7a6ea88f64bcfaed3d760a315260c40", 14360, 14424, 6176, 7776, 88, 2992, 8, 0, 16, 24},
	//offsets for: /mariadb/10.0.13/bin/mysqld (10.0.13-MariaDB)
	{"10.0.13-MariaDB","d4825fb8c13ecafce584e79ec184de26", 14368, 14432, 6192, 7792, 88, 2992, 8, 0, 16, 24},
	//offsets for: /mariadb/10.0.6/bin/mysqld (10.0.6-MariaDB)
	{"10.0.6-MariaDB","cb446cf1c5e534308a972cc3369c444e", 14320, 14384, 6152, 7736, 88, 2968, 8, 0, 16, 24},
	//offsets for: /mariadb/10.0.7/bin/mysqld (10.0.7-MariaDB)
	{"10.0.7-MariaDB","5d3366439bc89ea4abec51567f3f27ae", 14320, 14384, 6152, 7736, 88, 2968, 8, 0, 16, 24},
	//offsets for: /mariadb/10.0.8/bin/mysqld (10.0.8-MariaDB)
	{"10.0.8-MariaDB","b5c469a42ab87ee2e5df4c3732b7f329", 14328, 14392, 6160, 7744, 88, 2976, 8, 0, 16, 24},
	//offsets for: /mariadb/10.0.9/bin/mysqld (10.0.9-MariaDB)
	{"10.0.9-MariaDB","267d6b848a6b77f8341ba78b975084ff", 14368, 14432, 6184, 7784, 88, 2992, 8, 0, 16, 24},
	//offsets for: /mariadb/5.5.40/bin/mysqld (5.5.40-MariaDB)
	{"5.5.40-MariaDB","d01682f6cec8aa861a9b357a88e5f28a", 12016, 12080, 5800, 6896, 88, 2936, 8, 0, 16, 24},
	//offsets for: /mariadb/5.5.39/bin/mysqld (5.5.39-MariaDB)
	{"5.5.39-MariaDB","5da9ef52435a920cdcbfe824534a77fc", 12016, 12080, 5800, 6896, 88, 2936, 8, 0, 16, 24},
	//offsets for: /mariadb/5.5.38/bin/mysqld (5.5.38-MariaDB)
	{"5.5.38-MariaDB","1ecd82e172b1bf62cab9268d48e4e070", 12016, 12080, 5800, 6896, 88, 2936, 8, 0, 16, 24},
	//offsets for: /mariadb/5.5.32/bin/mysqld (5.5.32-MariaDB)
	{"5.5.32-MariaDB","c67c5c5eaab8467ad1cc170db8e0492d", 12032, 12096, 5816, 6912, 88, 2928, 8, 0, 16, 24},
	//offsets for: /mariadb/5.5.33/bin/mysqld (5.5.33-MariaDB)
	{"5.5.33-MariaDB","170f56b89ca6a263c625b9f6dd76c6ad", 12032, 12096, 5816, 6912, 88, 2928, 8, 0, 16, 24},
	//offsets for: /mariadb/5.5.33a/bin/mysqld (5.5.33a-MariaDB)
	{"5.5.33a-MariaDB","dc57899efbcc93a0ddf57c1820acf351", 12032, 12096, 5816, 6912, 88, 2928, 8, 0, 16, 24},
	//offsets for: /mariadb/5.5.34/bin/mysqld (5.5.34-MariaDB)
	{"5.5.34-MariaDB","0c6901e6e213142c3db5176af4329696", 12032, 12096, 5816, 6912, 88, 2928, 8, 0, 16, 24},
	//offsets for: /mariadb/5.5.35/bin/mysqld (5.5.35-MariaDB)
	{"5.5.35-MariaDB","18b283a98fa3659cf667446850e338eb", 12040, 12104, 5824, 6920, 88, 2936, 8, 0, 16, 24},
	//offsets for: /mariadb/5.5.36/bin/mysqld (5.5.36-MariaDB)
	{"5.5.36-MariaDB","33180ec22cf201f6f769540538318b5b", 12040, 12104, 5824, 6920, 88, 2936, 8, 0, 16, 24},
	//offsets for: /mariadb/5.5.37/bin/mysqld (5.5.37-MariaDB)
	{"5.5.37-MariaDB","71b059dd674950c6007fdeb447311707", 12040, 12104, 5824, 6920, 88, 2936, 8, 0, 16, 24}
};

#else
//32 bit offsets
const ThdOffsets thd_offsets_arr[] =
{
	/* +++ MARIADB 32 OFFSETS GO HERE +++ */
	//offsets for: /mariadb/10.1.15/bin/mysqld (10.1.15-MariaDB)
	{"10.1.15-MariaDB","84e9a73187cb88c5c7b51a9404cdf4f0", 8472, 8508, 3816, 5276, 44, 1892, 4, 0, 8, 12, 84, 8584},
	//offsets for: /mariadb/10.0.26/bin/mysqld (10.0.26-MariaDB)
	{"10.0.26-MariaDB","eb8b020269d3906300ff4f7adef68788", 8344, 8380, 3688, 5148, 44, 1892, 4, 0, 8, 12, 84, 8452},
	//offsets for: /mariadb/5.5.50/bin/mysqld (5.5.50-MariaDB)
	{"5.5.50-MariaDB","c7ae7501b914c06dc7bc020bd6d5a8f3", 7276, 7312, 3460, 4468, 44, 1856, 4, 0, 8, 12, 84, 7372},
	//offsets for: /mariadb/10.1.14/bin/mysqld (10.1.14-MariaDB)
	{"10.1.14-MariaDB","0128c36ea5faba504272ba2f30a3e63b", 8472, 8508, 3816, 5276, 44, 1892, 4, 0, 8, 12, 84, 8584},
	//offsets for: /mariadb/10.0.25/bin/mysqld (10.0.25-MariaDB)
	{"10.0.25-MariaDB","2e207b8bac44e75ad5e6796f9eb47705", 8344, 8380, 3688, 5148, 44, 1892, 4, 0, 8, 12, 84, 8452},
	//offsets for: /mariadb/5.5.49/bin/mysqld (5.5.49-MariaDB)
	{"5.5.49-MariaDB","2f61d5f454b0f6fdf368ee68b18fe865", 7276, 7312, 3460, 4468, 44, 1856, 4, 0, 8, 12, 84, 7372},
	//offsets for: /mariadb/10.1.13/bin/mysqld (10.1.13-MariaDB)
	{"10.1.13-MariaDB","546cb7233e8567aea304fda3d9812a7b", 8472, 8508, 3816, 5276, 44, 1892, 4, 0, 8, 12, 84, 8584},
	//offsets for: /mariadb/10.1.12/bin/mysqld (10.1.12-MariaDB)
	{"10.1.12-MariaDB","590bb2be8fb17c7b3599539d4a69ab44", 8472, 8508, 3816, 5276, 44, 1892, 4, 0, 8, 12, 84, 8584},
	//offsets for: /mariadb/10.0.24/bin/mysqld (10.0.24-MariaDB)
	{"10.0.24-MariaDB","2571649d8352ee31a77a2a7a500ed54a", 8344, 8380, 3688, 5148, 44, 1892, 4, 0, 8, 12, 84, 8452},
	//offsets for: /mariadb/5.5.48/bin/mysqld (5.5.48-MariaDB)
	{"5.5.48-MariaDB","09caa6790e00e0da77f78159ae5c2558", 7276, 7312, 3460, 4468, 44, 1856, 4, 0, 8, 12, 84, 7372},
	//offsets for: /mariadb/10.1.11/bin/mysqld (10.1.11-MariaDB)
	{"10.1.11-MariaDB","bc5982b6028c0ef5d50ff7f8465bc6e5", 8472, 8508, 3816, 5276, 44, 1892, 4, 0, 8, 12, 84, 8584},
	//offsets for: /mariadb/10.1.10/bin/mysqld (10.1.10-MariaDB)
	{"10.1.10-MariaDB","102b27c47031aecdf8ffaf881c841e28", 8464, 8500, 3808, 5268, 44, 1884, 4, 0, 8, 12, 84, 8576},
	//offsets for: /mariadb/10.0.23/bin/mysqld (10.0.23-MariaDB)
	{"10.0.23-MariaDB","487c1be817fcf314df0edc3f688fdc80", 8336, 8372, 3680, 5140, 44, 1892, 4, 0, 8, 12, 84, 8444},
	//offsets for: /mariadb/10.0.22/bin/mysqld (10.0.22-MariaDB)
	{"10.0.22-MariaDB","6fce26b567ab09fc3fe2008a9d8e16b9", 8332, 8368, 3680, 5140, 44, 1892, 4, 0, 8, 12, 84, 8440},
	//offsets for: /mariadb/5.5.47/bin/mysqld (5.5.47-MariaDB)
	{"5.5.47-MariaDB","5d7d4f995a41dc09e3a557e0a5529b11", 7276, 7312, 3460, 4468, 44, 1856, 4, 0, 8, 12, 84, 7372},
	//offsets for: /mariadb/10.1.9/bin/mysqld (10.1.9-MariaDB)
	{"10.1.9-MariaDB","3f2078219f1098a89a7b12978b33a7e3", 8460, 8496, 3808, 5268, 44, 1884, 4, 0, 8, 12, 84, 8572},
	//offsets for: /mariadb/10.1.8/bin/mysqld (10.1.8-MariaDB)
	{"10.1.8-MariaDB","aba39e89c42a58d6ed73f9fd96c75b42", 8460, 8496, 3808, 5268, 44, 1884, 4, 0, 8, 12, 84, 8572},
	//offsets for: /mariadb/5.5.46/bin/mysqld (5.5.46-MariaDB)
	{"5.5.46-MariaDB","df034940564625d2ad168799d47190d1", 7276, 7312, 3460, 4468, 44, 1856, 4, 0, 8, 12, 84, 7372},
	//offsets for: /mariadb/10.0.21/bin/mysqld (10.0.21-MariaDB)
	{"10.0.21-MariaDB","3b330c8fef5e540fea0060d8778e1e20", 8332, 8368, 3680, 5140, 44, 1892, 4, 0, 8, 12, 84, 8440},
	//offsets for: /mariadb/5.5.45/bin/mysqld (5.5.45-MariaDB)
	{"5.5.45-MariaDB","c1b8f68c1012af3fba72fe72066992e0", 7276, 7312, 3460, 4468, 44, 1856, 4, 0, 8, 12, 84, 7372},
	//offsets for: /mariadb/10.0.20/bin/mysqld (10.0.20-MariaDB)
	{"10.0.20-MariaDB","707e0ad28b6b6ab79dee1b7e0ce9e7e8", 8328, 8364, 3680, 5136, 44, 1904, 4, 0, 8, 12, 84, 8436},
	//offsets for: /mariadb/5.5.44/bin/mysqld (5.5.44-MariaDB)
	{"5.5.44-MariaDB","c1e0214abf6271d97c01c95a905a5527", 7272, 7308, 3460, 4464, 44, 1868, 4, 0, 8, 12, 84, 7368},
	//offsets for: /mariadb/10.0.19/bin/mysqld (10.0.19-MariaDB)
	{"10.0.19-MariaDB","c8f349901e9957f505ae00d300f8c9a4", 8328, 8364, 3680, 5136, 44, 1904, 4, 0, 8, 12, 84, 8436},
	//offsets for: /mariadb/10.0.18/bin/mysqld (10.0.18-MariaDB)
	{"10.0.18-MariaDB","a1f007a1656689db27b711feb47653a2", 8328, 8364, 3680, 5136, 44, 1904, 4, 0, 8, 12, 84, 8436},
	//offsets for: /mariadb/5.5.43/bin/mysqld (5.5.43-MariaDB)
	{"5.5.43-MariaDB","711b99e3b6d5a71934b1eda2c4039d76", 7272, 7308, 3460, 4464, 44, 1868, 4, 0, 8, 12, 84, 7368},
	//offsets for: /mariadb/10.0.17/bin/mysqld (10.0.17-MariaDB)
	{"10.0.17-MariaDB","d23ec9269df72a12bbe5b5255f40ed17", 9316, 9352, 3680, 5136, 44, 1904, 4, 0, 8, 12, 84, 9424},
	//offsets for: /mariadb/5.5.42/bin/mysqld (5.5.42-MariaDB)
	{"5.5.42-MariaDB","6306b4ed556f3d22517e9a82a7478f7c", 7272, 7308, 3460, 4464, 44, 1868, 4, 0, 8, 12, 84, 7368},
	//offsets for: /mariadb/10.0.16/bin/mysqld (10.0.16-MariaDB)
	{"10.0.16-MariaDB","04ad0bec5198a8598e79f2b18492bdcb", 9316, 9352, 3680, 5136, 44, 1904, 4, 0, 8, 12, 84, 9424},
	//offsets for: /mariadb/5.5.41/bin/mysqld (5.5.41-MariaDB)
	{"5.5.41-MariaDB","51da3a9aedfde2f4e320c607b1992f74", 7272, 7308, 3460, 4464, 44, 1860, 4, 0, 8, 12},
	//offsets for: /mariadb/10.0.15/bin/mysqld (10.0.15-MariaDB)
	{"10.0.15-MariaDB","3b9b7cb72c530207c82929016db7e266", 9316, 9352, 3680, 5136, 44, 1896, 4, 0, 8, 12},
	//offsets for: /mariadb/10.0.14/bin/mysqld (10.0.14-MariaDB)
	{"10.0.14-MariaDB","311ee785ffab56e289cee28b6ffddcd4", 9316, 9352, 3680, 5136, 44, 1896, 4, 0, 8, 12},
	//offsets for: /mariadb/10.0.10/bin/mysqld (10.0.10-MariaDB)
	{"10.0.10-MariaDB","80a3f0a2958501ca25c11895efb4e55a", 9312, 9348, 3672, 5128, 44, 1896, 4, 0, 8, 12},
	//offsets for: /mariadb/10.0.11/bin/mysqld (10.0.11-MariaDB)
	{"10.0.11-MariaDB","07adaf2fffd5a307a10feec5dd2e53d0", 9304, 9340, 3664, 5120, 44, 1896, 4, 0, 8, 12},
	//offsets for: /mariadb/10.0.12/bin/mysqld (10.0.12-MariaDB)
	{"10.0.12-MariaDB","8cf54bbffb3e26cdfa6826d4f49c02bc", 9304, 9340, 3664, 5120, 44, 1896, 4, 0, 8, 12},
	//offsets for: /mariadb/10.0.13/bin/mysqld (10.0.13-MariaDB)
	{"10.0.13-MariaDB","c714e7b4e5c789b7b1e0f7043469f241", 9308, 9344, 3672, 5128, 44, 1896, 4, 0, 8, 12},
	//offsets for: /mariadb/10.0.6/bin/mysqld (10.0.6-MariaDB)
	{"10.0.6-MariaDB","33494970571f6fa8f988c9d1244d13bc", 9284, 9320, 3652, 5100, 44, 1884, 4, 0, 8, 12},
	//offsets for: /mariadb/10.0.7/bin/mysqld (10.0.7-MariaDB)
	{"10.0.7-MariaDB","dfe202992ca91f1eccf4ddc9311324a5", 9284, 9320, 3652, 5100, 44, 1884, 4, 0, 8, 12},
	//offsets for: /mariadb/10.0.8/bin/mysqld (10.0.8-MariaDB)
	{"10.0.8-MariaDB","69ce72dc03413f1a6b60e7ec01bf8555", 9292, 9328, 3660, 5108, 44, 1888, 4, 0, 8, 12},
	//offsets for: /mariadb/10.0.9/bin/mysqld (10.0.9-MariaDB)
	{"10.0.9-MariaDB","e5947442c5b4f14e8ee48accb80a1197", 9312, 9348, 3672, 5128, 44, 1896, 4, 0, 8, 12},
	//offsets for: /mariadb/5.5.40/bin/mysqld (5.5.40-MariaDB)
	{"5.5.40-MariaDB","0beab0991cb2cf128a4fbd0f3a36ae3b", 7272, 7308, 3460, 4464, 44, 1860, 4, 0, 8, 12},
	//offsets for: /mariadb/5.5.39/bin/mysqld (5.5.39-MariaDB)
	{"5.5.39-MariaDB","144f0f2a2d98ddbae1e574367e952265", 7272, 7308, 3460, 4464, 44, 1860, 4, 0, 8, 12},
	//offsets for: /mariadb/5.5.38/bin/mysqld (5.5.38-MariaDB)
	{"5.5.38-MariaDB","39d11f6145bbe9bbf140bb235398969d", 7272, 7308, 3460, 4464, 44, 1860, 4, 0, 8, 12},
	//offsets for: /mariadb/5.5.32/bin/mysqld (5.5.32-MariaDB)
	{"5.5.32-MariaDB","1c523e9b505795636319e30151eaf022", 7288, 7324, 3476, 4480, 44, 1856, 4, 0, 8, 12},
	//offsets for: /mariadb/5.5.33/bin/mysqld (5.5.33-MariaDB)
	{"5.5.33-MariaDB","0cdf83696aabc4cba2e9642c3b986f6d", 7288, 7324, 3476, 4480, 44, 1856, 4, 0, 8, 12},
	//offsets for: /mariadb/5.5.33a/bin/mysqld (5.5.33a-MariaDB)
	{"5.5.33a-MariaDB","6b7fa32fe316e16e3adba2fd2940a976", 7288, 7324, 3476, 4480, 44, 1856, 4, 0, 8, 12},
	//offsets for: /mariadb/5.5.34/bin/mysqld (5.5.34-MariaDB)
	{"5.5.34-MariaDB","13639243e755ca61e45e61cd92c860b2", 7288, 7324, 3476, 4480, 44, 1856, 4, 0, 8, 12},
	//offsets for: /mariadb/5.5.35/bin/mysqld (5.5.35-MariaDB)
	{"5.5.35-MariaDB","1dc4e9caca4b9aa2440943ba3355a572", 7296, 7332, 3484, 4488, 44, 1860, 4, 0, 8, 12},
	//offsets for: /mariadb/5.5.36/bin/mysqld (5.5.36-MariaDB)
	{"5.5.36-MariaDB","5cf95a64e10e2b53b8c85554874d034b", 7296, 7332, 3484, 4488, 44, 1860, 4, 0, 8, 12},
	//offsets for: /mariadb/5.5.37/bin/mysqld (5.5.37-MariaDB)
	{"5.5.37-MariaDB","f4434929944d7e9c4351b51e30c0d4d6", 7296, 7332, 3484, 4488, 44, 1860, 4, 0, 8, 12}
};
#endif

//end offsets for MariaDB
#endif

//the size of the offsets arr
const size_t thd_offsets_arr_size = array_elements(thd_offsets_arr);
