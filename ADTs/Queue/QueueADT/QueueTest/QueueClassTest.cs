using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using Data_Structures;

namespace QueueTest {

    [TestClass]
    public class QueueClassTest {
        [TestMethod]
        public void TestMethodisEmpty() {

            Queue<String> queue = new Queue<String>();

            Assert.IsFalse(queue.isEmpty());
        }
    }
}
